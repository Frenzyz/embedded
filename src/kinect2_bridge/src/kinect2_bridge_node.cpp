#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <geometry_msgs/msg/transform_stamped.hpp>

#include <libfreenect2/libfreenect2.hpp>
#include <libfreenect2/frame_listener_impl.h>
#include <libfreenect2/registration.h>
#include <libfreenect2/packet_pipeline.h>

class Kinect2Bridge : public rclcpp::Node {
public:
  Kinect2Bridge() : Node("kinect2_bridge") {
    // Initialize publishers
    rgb_pub_ = this->create_publisher<sensor_msgs::msg::Image>("kinect2/rgb/image", 10);
    depth_pub_ = this->create_publisher<sensor_msgs::msg::Image>("kinect2/depth/image", 10);
    
    // Initialize TF broadcaster
    tf_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    
    // Publish static transform
    geometry_msgs::msg::TransformStamped transform_stamped;
    transform_stamped.header.stamp = this->now();
    transform_stamped.header.frame_id = "base_link";
    transform_stamped.child_frame_id = "kinect2_link";
    transform_stamped.transform.translation.x = 0.0;
    transform_stamped.transform.translation.y = 0.0;
    transform_stamped.transform.translation.z = 0.3;
    transform_stamped.transform.rotation.x = 0.0;
    transform_stamped.transform.rotation.y = 0.0;
    transform_stamped.transform.rotation.z = 0.0;
    transform_stamped.transform.rotation.w = 1.0;
    tf_broadcaster_->sendTransform(transform_stamped);
    
    // Initialize libfreenect2
    if (freenect2_.enumerateDevices() == 0) {
      RCLCPP_ERROR(this->get_logger(), "No Kinect2 devices found!");
      return;
    }
    
    std::string serial = freenect2_.getDefaultDeviceSerialNumber();
    RCLCPP_INFO(this->get_logger(), "Found Kinect2 device with serial: %s", serial.c_str());
    
    // Create pipeline
    pipeline_ = new libfreenect2::OpenGLPacketPipeline();
    
    // Open device
    dev_ = freenect2_.openDevice(serial, pipeline_);
    if (!dev_) {
      RCLCPP_ERROR(this->get_logger(), "Failed to open Kinect2 device!");
      return;
    }
    
    // Setup listeners
    listener_ = new libfreenect2::SyncMultiFrameListener(
      libfreenect2::Frame::Color | libfreenect2::Frame::Depth);
    
    dev_->setColorFrameListener(listener_);
    dev_->setIrAndDepthFrameListener(listener_);
    
    // Start device
    if (!dev_->start()) {
      RCLCPP_ERROR(this->get_logger(), "Failed to start Kinect2 device!");
      return;
    }
    
    RCLCPP_INFO(this->get_logger(), "Kinect2 device started");
    
    // Setup registration
    registration_ = new libfreenect2::Registration(
      dev_->getIrCameraParams(), dev_->getColorCameraParams());
    
    // Create timer for publishing frames
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(33), // ~30 fps
      std::bind(&Kinect2Bridge::publishFrames, this));
  }
  
  ~Kinect2Bridge() {
    if (dev_) {
      dev_->stop();
      dev_->close();
    }
    
    delete registration_;
    delete listener_;
    delete pipeline_;
  }
  
private:
  void publishFrames() {
    if (!listener_) return;
    
    libfreenect2::FrameMap frames;
    if (!listener_->waitForNewFrame(frames, 10)) {
      RCLCPP_WARN(this->get_logger(), "Timeout waiting for new frames");
      return;
    }
    
    libfreenect2::Frame *rgb = frames[libfreenect2::Frame::Color];
    libfreenect2::Frame *depth = frames[libfreenect2::Frame::Depth];
    
    auto rgb_msg = std::make_unique<sensor_msgs::msg::Image>();
    rgb_msg->header.stamp = this->now();
    rgb_msg->header.frame_id = "kinect2_rgb_optical_frame";
    rgb_msg->height = rgb->height;
    rgb_msg->width = rgb->width;
    rgb_msg->encoding = "bgra8";
    rgb_msg->is_bigendian = false;
    rgb_msg->step = rgb->width * 4;
    rgb_msg->data.resize(rgb->height * rgb->width * 4);
    std::memcpy(rgb_msg->data.data(), rgb->data, rgb_msg->data.size());
    
    auto depth_msg = std::make_unique<sensor_msgs::msg::Image>();
    depth_msg->header.stamp = this->now();
    depth_msg->header.frame_id = "kinect2_depth_optical_frame";
    depth_msg->height = depth->height;
    depth_msg->width = depth->width;
    depth_msg->encoding = "16UC1";
    depth_msg->is_bigendian = false;
    depth_msg->step = depth->width * 2;
    depth_msg->data.resize(depth->height * depth->width * 2);
    std::memcpy(depth_msg->data.data(), depth->data, depth_msg->data.size());
    
    rgb_pub_->publish(std::move(rgb_msg));
    depth_pub_->publish(std::move(depth_msg));
    
    listener_->release(frames);
  }
  
  libfreenect2::Freenect2 freenect2_;
  libfreenect2::Freenect2Device *dev_ = nullptr;
  libfreenect2::PacketPipeline *pipeline_ = nullptr;
  libfreenect2::SyncMultiFrameListener *listener_ = nullptr;
  libfreenect2::Registration *registration_ = nullptr;
  
  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr rgb_pub_;
  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr depth_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Kinect2Bridge>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

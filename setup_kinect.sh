#!/bin/bash

# Kinect Setup Script for ROS 2
# This script installs libfreenect2 and sets up ROS 2 integration

echo "Setting up Kinect for ROS 2..."
echo "============================="

# Install dependencies
echo "Installing dependencies..."
sudo apt-get update
sudo apt-get install -y build-essential cmake pkg-config libusb-1.0-0-dev libturbojpeg0-dev libglfw3-dev

# Clone and build libfreenect2
echo "Cloning libfreenect2..."
cd /tmp
if [ ! -d "libfreenect2" ]; then
    git clone https://github.com/OpenKinect/libfreenect2.git
fi

cd libfreenect2

# Build libfreenect2
echo "Building libfreenect2..."
mkdir -p build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local
make -j4
sudo make install
sudo ldconfig

# Set up udev rules
echo "Setting up udev rules..."
sudo cp ../platform/linux/udev/90-kinect2.rules /etc/udev/rules.d/

# Create a simple ROS 2 node for Kinect
echo "Creating ROS 2 Kinect node..."
cd /home/embedded/ros2_ws/src
mkdir -p kinect2_bridge/kinect2_bridge
mkdir -p kinect2_bridge/launch

# Create package.xml
cat > kinect2_bridge/package.xml << 'PACKAGE_XML'
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>kinect2_bridge</name>
  <version>0.1.0</version>
  <description>ROS 2 bridge for Kinect v2 using libfreenect2</description>
  <maintainer email="user@todo.todo">user</maintainer>
  <license>Apache License 2.0</license>

  <buildtool_depend>ament_cmake</buildtool_depend>
  <depend>rclcpp</depend>
  <depend>sensor_msgs</depend>
  <depend>cv_bridge</depend>
  <depend>image_transport</depend>
  <depend>tf2_ros</depend>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
PACKAGE_XML

# Create CMakeLists.txt
cat > kinect2_bridge/CMakeLists.txt << 'CMAKE'
cmake_minimum_required(VERSION 3.8)
project(kinect2_bridge)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(freenect2 REQUIRED)
find_package(OpenCV REQUIRED)

# Add executable
add_executable(kinect2_bridge_node src/kinect2_bridge_node.cpp)
target_include_directories(kinect2_bridge_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${freenect2_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)
target_link_libraries(kinect2_bridge_node
  ${freenect2_LIBRARIES}
  ${OpenCV_LIBRARIES}
)
ament_target_dependencies(kinect2_bridge_node
  rclcpp
  sensor_msgs
  cv_bridge
  image_transport
  tf2_ros
)

# Install
install(TARGETS kinect2_bridge_node
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

ament_package()
CMAKE

# Create source directory
mkdir -p kinect2_bridge/src

# Create Kinect2 bridge node
cat > kinect2_bridge/src/kinect2_bridge_node.cpp << 'CPP'
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
CPP

# Create launch file
cat > kinect2_bridge/launch/kinect2_bridge.launch.py << 'LAUNCH'
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='kinect2_bridge',
            executable='kinect2_bridge_node',
            name='kinect2_bridge',
            output='screen'
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='kinect2_base_link',
            arguments=['0', '0', '0.3', '0', '0', '0', 'base_link', 'kinect2_link']
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='kinect2_rgb_frame',
            arguments=['0', '0', '0', '0', '0', '0', 'kinect2_link', 'kinect2_rgb_optical_frame']
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='kinect2_depth_frame',
            arguments=['0', '0', '0', '0', '0', '0', 'kinect2_link', 'kinect2_depth_optical_frame']
        )
    ])
LAUNCH

# Build the package
echo "Building ROS 2 Kinect package..."
cd /home/embedded/ros2_ws
source /opt/ros/humble/setup.bash
colcon build --packages-select kinect2_bridge

echo ""
echo "Kinect setup completed!"
echo "To use the Kinect with ROS 2, run:"
echo "source /home/embedded/ros2_ws/install/setup.bash"
echo "ros2 launch kinect2_bridge kinect2_bridge.launch.py"
echo ""
echo "This setup has been integrated into the start_kobuki.sh script."

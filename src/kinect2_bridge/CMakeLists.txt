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

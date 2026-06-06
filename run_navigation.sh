#!/bin/bash

# Source ROS environment
source /opt/ros/humble/setup.bash
source /home/embedded/ros2_ws/install/setup.bash

# Launch navigation
ros2 launch kobuki navigation.launch.py

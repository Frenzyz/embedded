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

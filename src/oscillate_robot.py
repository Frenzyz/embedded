#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time
import math

class OscillateRobot(Node):
    def __init__(self):
        super().__init__('oscillate_robot')
        
        # Create publisher for velocity commands
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # Parameters for oscillation
        self.linear_speed = 0.2  # m/s - adjust as needed
        self.oscillation_period = 2.0  # seconds for one complete cycle
        self.move_duration = 1.0  # seconds to move in each direction
        
        # Timer for publishing commands
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10 Hz
        
        # Track oscillation state
        self.start_time = time.time()
        self.current_direction = 1  # 1 for forward, -1 for backward
        
        self.get_logger().info('Oscillate Robot Node Started')
        self.get_logger().info(f'Linear speed: {self.linear_speed} m/s')
        self.get_logger().info(f'Move duration: {self.move_duration} seconds each direction')

    def timer_callback(self):
        current_time = time.time()
        elapsed_time = current_time - self.start_time
        
        # Calculate which phase of oscillation we're in
        cycle_time = elapsed_time % self.oscillation_period
        
        twist = Twist()
        
        if cycle_time < self.move_duration:
            # First half: move forward
            twist.linear.x = self.linear_speed
            direction = "Forward"
        else:
            # Second half: move backward
            twist.linear.x = -self.linear_speed
            direction = "Backward"
        
        # Keep angular velocity at 0 to maintain straight line
        twist.angular.z = 0.0
        
        # Publish the command
        self.cmd_vel_pub.publish(twist)
        
        # Log status every second
        if int(elapsed_time) % 1 == 0 and elapsed_time - int(elapsed_time) < 0.1:
            self.get_logger().info(f'Direction: {direction}, Speed: {twist.linear.x:.2f} m/s')

    def stop_robot(self):
        """Stop the robot by publishing zero velocities"""
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = 0.0
        self.cmd_vel_pub.publish(twist)
        self.get_logger().info('Robot stopped')

def main(args=None):
    rclpy.init(args=args)
    
    oscillate_node = OscillateRobot()
    
    try:
        rclpy.spin(oscillate_node)
    except KeyboardInterrupt:
        oscillate_node.get_logger().info('Shutting down...')
        oscillate_node.stop_robot()
    finally:
        oscillate_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
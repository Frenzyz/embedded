#!/bin/bash

# Kobuki Robot Startup Script
# This script starts the Kobuki drivers and description for RViz visualization

echo "Starting Kobuki Robot System..."
echo "================================"

# Full path to ROS setup file
ROS_SETUP="/opt/ros/jazzy/setup.bash"
WORKSPACE_SETUP="/home/embedded/ros2_ws/install/setup.bash"

# Check if ROS is installed
if [ ! -f "$ROS_SETUP" ]; then
    echo "ERROR: ROS setup file not found at $ROS_SETUP"
    exit 1
fi

# Check if workspace is built
if [ ! -f "$WORKSPACE_SETUP" ]; then
    echo "ERROR: Workspace setup file not found at $WORKSPACE_SETUP"
    exit 1
fi

# Source ROS environment in this shell
source "$ROS_SETUP"
source "$WORKSPACE_SETUP"

echo "Launching Kobuki drivers and description..."

# Launch Kobuki drivers in a new terminal with explicit sourcing
gnome-terminal --tab --title="Kobuki Drivers" -- bash -c "source $ROS_SETUP && source $WORKSPACE_SETUP && ros2 launch kobuki kobuki.launch.py || echo 'Failed to launch Kobuki drivers'; exec bash" &

sleep 2

# Launch Kobuki description in a new terminal with explicit sourcing
gnome-terminal --tab --title="Kobuki Description" -- bash -c "source $ROS_SETUP && source $WORKSPACE_SETUP && ros2 launch kobuki_description kobuki_description.launch.py || echo 'Failed to launch Kobuki description'; exec bash" &

echo ""
echo "Kobuki system is starting up..."
echo "Two terminal windows should have opened:"
echo "1. Kobuki Drivers - handles robot hardware communication"
echo "2. Kobuki Description - provides robot model for RViz"
echo ""
echo "To run navigation, open a new terminal and run:"
echo "./run_navigation.sh"
echo ""

# Create a simple navigation script
cat > /home/embedded/Desktop/run_navigation.sh << 'NAV_EOF'
#!/bin/bash

# Source ROS environment
source /opt/ros/humble/setup.bash
source /home/embedded/ros2_ws/install/setup.bash

# Launch navigation
ros2 launch kobuki navigation.launch.py
NAV_EOF

# Make navigation script executable
chmod +x /home/embedded/Desktop/run_navigation.sh

# Don't use the monitoring loop as it's causing issues
# Just let the terminals run independently

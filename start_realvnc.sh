#!/bin/bash

# This script sets up a VNC server compatible with RealVNC Viewer

# Kill any existing VNC servers
pkill x11vnc 2>/dev/null || true
vncserver -kill :1 2>/dev/null || true

# Start x11vnc with specific options for RealVNC compatibility
x11vnc -display :0 -auth /var/run/lightdm/root/:0 -forever -shared -rfbport 5900 -rfbauth ~/.vnc/passwd -o ~/.vnc/x11vnc.log -bg -noxdamage -noxfixes -noxrecord

# Display connection information
echo ""
echo "VNC Server is running!"
echo "=========================="
echo "To connect to this machine via VNC:"
echo ""
HOSTNAME=$(hostname -I | awk '{print $1}')
echo "Address: ${HOSTNAME}:5900"
echo "Password: embedded"
echo ""
echo "You can use RealVNC Viewer to connect to this address."
echo ""
echo "If you still see only 'RFB 003.008', try these troubleshooting steps:"
echo "1. In RealVNC Viewer, go to File > Properties"
echo "2. Under the 'Options' tab, set 'Picture quality' to 'High'"
echo "3. Under the 'Expert' tab, set 'ColorLevel' to 'Full'"
echo "4. Try connecting again"
echo ""

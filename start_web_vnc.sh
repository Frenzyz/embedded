#!/bin/bash

# Kill any existing VNC servers
pkill x11vnc 2>/dev/null || true
vncserver -kill :1 2>/dev/null || true
pkill websockify 2>/dev/null || true

# Start VNC server
vncserver :1 -geometry 1280x720 -depth 24 -localhost no

# Start noVNC web server
websockify -D --web=/usr/share/novnc/ 6080 localhost:5901

# Display connection information
echo ""
echo "Web VNC Server is running!"
echo "=========================="
echo "To connect to this machine via web browser:"
echo ""
HOSTNAME=$(hostname -I | awk '{print $1}')
echo "URL: http://${HOSTNAME}:6080/vnc.html?host=${HOSTNAME}&port=6080"
echo ""
echo "No VNC client needed - just open the URL in any web browser"
echo ""

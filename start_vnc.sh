#!/bin/bash

# Kill any existing VNC servers
pkill x11vnc 2>/dev/null || true
vncserver -kill :1 2>/dev/null || true

# Create a proper VNC configuration
mkdir -p ~/.vnc

# Create a simple xstartup file
cat > ~/.vnc/xstartup << 'XSTART'
#!/bin/sh
unset SESSION_MANAGER
unset DBUS_SESSION_BUS_ADDRESS
exec startlxde
XSTART

chmod +x ~/.vnc/xstartup

# Start VNC server with proper display
vncserver :1 -geometry 1280x720 -depth 24 -localhost no -SecurityTypes VncAuth -PasswordFile ~/.vnc/passwd

# Display connection information
echo ""
echo "VNC Server is running!"
echo "=========================="
echo "To connect to this machine via VNC:"
echo ""
HOSTNAME=$(hostname -I | awk '{print $1}')
echo "Address: ${HOSTNAME}:5901"
echo "Password: embedded"
echo ""
echo "You can use RealVNC Viewer to connect to this address."
echo "If you see only 'RFB 003.008', try these troubleshooting steps:"
echo "1. In RealVNC Viewer, go to File > Properties"
echo "2. Under the 'Options' tab, set 'Picture quality' to 'High'"
echo "3. Under the 'Expert' tab, set 'ColorLevel' to 'Full'"
echo "4. Try connecting again"
echo ""

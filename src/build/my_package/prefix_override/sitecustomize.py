import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rassito/Documents/ros_projects/Bionic-Hand/src/install/my_package'

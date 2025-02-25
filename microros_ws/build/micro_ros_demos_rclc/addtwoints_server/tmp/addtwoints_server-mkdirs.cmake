# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/rassito/microros_ws/src/uros/micro-ROS-demos/rclc/addtwoints_server"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/src/addtwoints_server-build"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/tmp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/src/addtwoints_server-stamp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/src"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/src/addtwoints_server-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/src/addtwoints_server-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/addtwoints_server/src/addtwoints_server-stamp${cfgdir}") # cfgdir has leading slash
endif()

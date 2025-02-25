# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/rassito/microros_ws/src/uros/micro-ROS-demos/rclc/ping_pong"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/src/ping_pong-build"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/tmp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/src/ping_pong-stamp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/src"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/src/ping_pong-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/src/ping_pong-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/ping_pong/src/ping_pong-stamp${cfgdir}") # cfgdir has leading slash
endif()

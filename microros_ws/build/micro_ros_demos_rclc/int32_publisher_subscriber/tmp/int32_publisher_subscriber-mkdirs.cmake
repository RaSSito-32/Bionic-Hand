# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/rassito/microros_ws/src/uros/micro-ROS-demos/rclc/int32_publisher_subscriber"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/src/int32_publisher_subscriber-build"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/tmp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/src/int32_publisher_subscriber-stamp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/src"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/src/int32_publisher_subscriber-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/src/int32_publisher_subscriber-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/int32_publisher_subscriber/src/int32_publisher_subscriber-stamp${cfgdir}") # cfgdir has leading slash
endif()

# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/rassito/microros_ws/src/uros/micro-ROS-demos/rclc/configuration_example/configured_publisher"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/src/configured_publisher-build"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/tmp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/src/configured_publisher-stamp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/src"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/src/configured_publisher-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/src/configured_publisher-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/configuration_example/configured_publisher/src/configured_publisher-stamp${cfgdir}") # cfgdir has leading slash
endif()

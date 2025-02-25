# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/rassito/microros_ws/src/uros/micro-ROS-demos/rclc/fragmented_subscription"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/src/fragmented_subscription-build"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/tmp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/src/fragmented_subscription-stamp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/src"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/src/fragmented_subscription-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/src/fragmented_subscription-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/fragmented_subscription/src/fragmented_subscription-stamp${cfgdir}") # cfgdir has leading slash
endif()

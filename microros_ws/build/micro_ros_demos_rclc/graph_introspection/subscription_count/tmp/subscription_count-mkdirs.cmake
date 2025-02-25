# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/rassito/microros_ws/src/uros/micro-ROS-demos/rclc/graph_introspection/subscription_count"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/src/subscription_count-build"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/tmp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/src/subscription_count-stamp"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/src"
  "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/src/subscription_count-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/src/subscription_count-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/rassito/microros_ws/build/micro_ros_demos_rclc/graph_introspection/subscription_count/src/subscription_count-stamp${cfgdir}") # cfgdir has leading slash
endif()

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__TRV_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DRIVE_BASE_MSGS__MSG__DETAIL__TRV_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "drive_base_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "drive_base_msgs/msg/detail/trv_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace drive_base_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_serialize(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_base_msgs::msg::TRVCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
get_serialized_size(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_TRVCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_serialize_key(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
get_serialized_size_key(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_key_TRVCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drive_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_base_msgs, msg, TRVCommand)();

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__TRV_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

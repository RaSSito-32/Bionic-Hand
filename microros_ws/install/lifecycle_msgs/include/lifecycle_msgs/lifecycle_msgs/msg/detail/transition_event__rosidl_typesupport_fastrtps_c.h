// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from lifecycle_msgs:msg/TransitionEvent.idl
// generated code does not contain a copyright notice
#ifndef LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lifecycle_msgs/msg/detail/transition_event__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
bool cdr_serialize_lifecycle_msgs__msg__TransitionEvent(
  const lifecycle_msgs__msg__TransitionEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
bool cdr_deserialize_lifecycle_msgs__msg__TransitionEvent(
  eprosima::fastcdr::Cdr &,
  lifecycle_msgs__msg__TransitionEvent * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__msg__TransitionEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__msg__TransitionEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
bool cdr_serialize_key_lifecycle_msgs__msg__TransitionEvent(
  const lifecycle_msgs__msg__TransitionEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_key_lifecycle_msgs__msg__TransitionEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_key_lifecycle_msgs__msg__TransitionEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, TransitionEvent)();

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

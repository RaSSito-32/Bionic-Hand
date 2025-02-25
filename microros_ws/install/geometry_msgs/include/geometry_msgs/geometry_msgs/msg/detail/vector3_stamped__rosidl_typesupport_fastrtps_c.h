// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from geometry_msgs:msg/Vector3Stamped.idl
// generated code does not contain a copyright notice
#ifndef GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "geometry_msgs/msg/detail/vector3_stamped__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3Stamped(
  const geometry_msgs__msg__Vector3Stamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3Stamped(
  eprosima::fastcdr::Cdr &,
  geometry_msgs__msg__Vector3Stamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3Stamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3Stamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3Stamped(
  const geometry_msgs__msg__Vector3Stamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3Stamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3Stamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3Stamped)();

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

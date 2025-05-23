// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from statistics_msgs:msg/StatisticDataType.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/statistic_data_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "statistics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "statistics_msgs/msg/detail/statistic_data_type__struct.h"
#include "statistics_msgs/msg/detail/statistic_data_type__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _StatisticDataType__ros_msg_type = statistics_msgs__msg__StatisticDataType;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
bool cdr_serialize_statistics_msgs__msg__StatisticDataType(
  const statistics_msgs__msg__StatisticDataType * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
bool cdr_deserialize_statistics_msgs__msg__StatisticDataType(
  eprosima::fastcdr::Cdr & cdr,
  statistics_msgs__msg__StatisticDataType * ros_message)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_statistics_msgs__msg__StatisticDataType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StatisticDataType__ros_msg_type * ros_message = static_cast<const _StatisticDataType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_statistics_msgs__msg__StatisticDataType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: structure_needs_at_least_one_member
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = statistics_msgs__msg__StatisticDataType;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
bool cdr_serialize_key_statistics_msgs__msg__StatisticDataType(
  const statistics_msgs__msg__StatisticDataType * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_key_statistics_msgs__msg__StatisticDataType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StatisticDataType__ros_msg_type * ros_message = static_cast<const _StatisticDataType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_key_statistics_msgs__msg__StatisticDataType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: structure_needs_at_least_one_member
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = statistics_msgs__msg__StatisticDataType;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _StatisticDataType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const statistics_msgs__msg__StatisticDataType * ros_message = static_cast<const statistics_msgs__msg__StatisticDataType *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_statistics_msgs__msg__StatisticDataType(ros_message, cdr);
}

static bool _StatisticDataType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  statistics_msgs__msg__StatisticDataType * ros_message = static_cast<statistics_msgs__msg__StatisticDataType *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_statistics_msgs__msg__StatisticDataType(cdr, ros_message);
}

static uint32_t _StatisticDataType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_statistics_msgs__msg__StatisticDataType(
      untyped_ros_message, 0));
}

static size_t _StatisticDataType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_statistics_msgs__msg__StatisticDataType(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StatisticDataType = {
  "statistics_msgs::msg",
  "StatisticDataType",
  _StatisticDataType__cdr_serialize,
  _StatisticDataType__cdr_deserialize,
  _StatisticDataType__get_serialized_size,
  _StatisticDataType__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _StatisticDataType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StatisticDataType,
  get_message_typesupport_handle_function,
  &statistics_msgs__msg__StatisticDataType__get_type_hash,
  &statistics_msgs__msg__StatisticDataType__get_type_description,
  &statistics_msgs__msg__StatisticDataType__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, statistics_msgs, msg, StatisticDataType)() {
  return &_StatisticDataType__type_support;
}

#if defined(__cplusplus)
}
#endif

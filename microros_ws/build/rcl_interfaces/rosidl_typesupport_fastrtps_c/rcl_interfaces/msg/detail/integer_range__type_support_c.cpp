// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:msg/IntegerRange.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/integer_range__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/integer_range__struct.h"
#include "rcl_interfaces/msg/detail/integer_range__functions.h"
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


using _IntegerRange__ros_msg_type = rcl_interfaces__msg__IntegerRange;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_rcl_interfaces__msg__IntegerRange(
  const rcl_interfaces__msg__IntegerRange * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: from_value
  {
    cdr << ros_message->from_value;
  }

  // Field name: to_value
  {
    cdr << ros_message->to_value;
  }

  // Field name: step
  {
    cdr << ros_message->step;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_deserialize_rcl_interfaces__msg__IntegerRange(
  eprosima::fastcdr::Cdr & cdr,
  rcl_interfaces__msg__IntegerRange * ros_message)
{
  // Field name: from_value
  {
    cdr >> ros_message->from_value;
  }

  // Field name: to_value
  {
    cdr >> ros_message->to_value;
  }

  // Field name: step
  {
    cdr >> ros_message->step;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__IntegerRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntegerRange__ros_msg_type * ros_message = static_cast<const _IntegerRange__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: from_value
  {
    size_t item_size = sizeof(ros_message->from_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: to_value
  {
    size_t item_size = sizeof(ros_message->to_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: step
  {
    size_t item_size = sizeof(ros_message->step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__IntegerRange(
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

  // Field name: from_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: to_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: step
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rcl_interfaces__msg__IntegerRange;
    is_plain =
      (
      offsetof(DataType, step) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_key_rcl_interfaces__msg__IntegerRange(
  const rcl_interfaces__msg__IntegerRange * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: from_value
  {
    cdr << ros_message->from_value;
  }

  // Field name: to_value
  {
    cdr << ros_message->to_value;
  }

  // Field name: step
  {
    cdr << ros_message->step;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_key_rcl_interfaces__msg__IntegerRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntegerRange__ros_msg_type * ros_message = static_cast<const _IntegerRange__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: from_value
  {
    size_t item_size = sizeof(ros_message->from_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: to_value
  {
    size_t item_size = sizeof(ros_message->to_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: step
  {
    size_t item_size = sizeof(ros_message->step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_key_rcl_interfaces__msg__IntegerRange(
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
  // Field name: from_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: to_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: step
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rcl_interfaces__msg__IntegerRange;
    is_plain =
      (
      offsetof(DataType, step) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _IntegerRange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rcl_interfaces__msg__IntegerRange * ros_message = static_cast<const rcl_interfaces__msg__IntegerRange *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rcl_interfaces__msg__IntegerRange(ros_message, cdr);
}

static bool _IntegerRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rcl_interfaces__msg__IntegerRange * ros_message = static_cast<rcl_interfaces__msg__IntegerRange *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rcl_interfaces__msg__IntegerRange(cdr, ros_message);
}

static uint32_t _IntegerRange__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__msg__IntegerRange(
      untyped_ros_message, 0));
}

static size_t _IntegerRange__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__msg__IntegerRange(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IntegerRange = {
  "rcl_interfaces::msg",
  "IntegerRange",
  _IntegerRange__cdr_serialize,
  _IntegerRange__cdr_deserialize,
  _IntegerRange__get_serialized_size,
  _IntegerRange__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _IntegerRange__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntegerRange,
  get_message_typesupport_handle_function,
  &rcl_interfaces__msg__IntegerRange__get_type_hash,
  &rcl_interfaces__msg__IntegerRange__get_type_description,
  &rcl_interfaces__msg__IntegerRange__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, IntegerRange)() {
  return &_IntegerRange__type_support;
}

#if defined(__cplusplus)
}
#endif

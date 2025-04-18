// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lifecycle_msgs:msg/TransitionDescription.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition_description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lifecycle_msgs/msg/detail/transition_description__struct.h"
#include "lifecycle_msgs/msg/detail/transition_description__functions.h"
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

#include "lifecycle_msgs/msg/detail/state__functions.h"  // goal_state, start_state
#include "lifecycle_msgs/msg/detail/transition__functions.h"  // transition

// forward declare type support functions

bool cdr_serialize_lifecycle_msgs__msg__State(
  const lifecycle_msgs__msg__State * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_lifecycle_msgs__msg__State(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs__msg__State * ros_message);

size_t get_serialized_size_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_lifecycle_msgs__msg__State(
  const lifecycle_msgs__msg__State * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_lifecycle_msgs__msg__State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State)();

bool cdr_serialize_lifecycle_msgs__msg__Transition(
  const lifecycle_msgs__msg__Transition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_lifecycle_msgs__msg__Transition(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs__msg__Transition * ros_message);

size_t get_serialized_size_lifecycle_msgs__msg__Transition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__Transition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_lifecycle_msgs__msg__Transition(
  const lifecycle_msgs__msg__Transition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_lifecycle_msgs__msg__Transition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_lifecycle_msgs__msg__Transition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, Transition)();


using _TransitionDescription__ros_msg_type = lifecycle_msgs__msg__TransitionDescription;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
bool cdr_serialize_lifecycle_msgs__msg__TransitionDescription(
  const lifecycle_msgs__msg__TransitionDescription * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: transition
  {
    cdr_serialize_lifecycle_msgs__msg__Transition(
      &ros_message->transition, cdr);
  }

  // Field name: start_state
  {
    cdr_serialize_lifecycle_msgs__msg__State(
      &ros_message->start_state, cdr);
  }

  // Field name: goal_state
  {
    cdr_serialize_lifecycle_msgs__msg__State(
      &ros_message->goal_state, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
bool cdr_deserialize_lifecycle_msgs__msg__TransitionDescription(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs__msg__TransitionDescription * ros_message)
{
  // Field name: transition
  {
    cdr_deserialize_lifecycle_msgs__msg__Transition(cdr, &ros_message->transition);
  }

  // Field name: start_state
  {
    cdr_deserialize_lifecycle_msgs__msg__State(cdr, &ros_message->start_state);
  }

  // Field name: goal_state
  {
    cdr_deserialize_lifecycle_msgs__msg__State(cdr, &ros_message->goal_state);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransitionDescription__ros_msg_type * ros_message = static_cast<const _TransitionDescription__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: transition
  current_alignment += get_serialized_size_lifecycle_msgs__msg__Transition(
    &(ros_message->transition), current_alignment);

  // Field name: start_state
  current_alignment += get_serialized_size_lifecycle_msgs__msg__State(
    &(ros_message->start_state), current_alignment);

  // Field name: goal_state
  current_alignment += get_serialized_size_lifecycle_msgs__msg__State(
    &(ros_message->goal_state), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__msg__TransitionDescription(
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

  // Field name: transition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_lifecycle_msgs__msg__Transition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: start_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_lifecycle_msgs__msg__State(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: goal_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_lifecycle_msgs__msg__State(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lifecycle_msgs__msg__TransitionDescription;
    is_plain =
      (
      offsetof(DataType, goal_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
bool cdr_serialize_key_lifecycle_msgs__msg__TransitionDescription(
  const lifecycle_msgs__msg__TransitionDescription * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: transition
  {
    cdr_serialize_key_lifecycle_msgs__msg__Transition(
      &ros_message->transition, cdr);
  }

  // Field name: start_state
  {
    cdr_serialize_key_lifecycle_msgs__msg__State(
      &ros_message->start_state, cdr);
  }

  // Field name: goal_state
  {
    cdr_serialize_key_lifecycle_msgs__msg__State(
      &ros_message->goal_state, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_key_lifecycle_msgs__msg__TransitionDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransitionDescription__ros_msg_type * ros_message = static_cast<const _TransitionDescription__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: transition
  current_alignment += get_serialized_size_key_lifecycle_msgs__msg__Transition(
    &(ros_message->transition), current_alignment);

  // Field name: start_state
  current_alignment += get_serialized_size_key_lifecycle_msgs__msg__State(
    &(ros_message->start_state), current_alignment);

  // Field name: goal_state
  current_alignment += get_serialized_size_key_lifecycle_msgs__msg__State(
    &(ros_message->goal_state), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_key_lifecycle_msgs__msg__TransitionDescription(
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
  // Field name: transition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_lifecycle_msgs__msg__Transition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: start_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_lifecycle_msgs__msg__State(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: goal_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_lifecycle_msgs__msg__State(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lifecycle_msgs__msg__TransitionDescription;
    is_plain =
      (
      offsetof(DataType, goal_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TransitionDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const lifecycle_msgs__msg__TransitionDescription * ros_message = static_cast<const lifecycle_msgs__msg__TransitionDescription *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_lifecycle_msgs__msg__TransitionDescription(ros_message, cdr);
}

static bool _TransitionDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  lifecycle_msgs__msg__TransitionDescription * ros_message = static_cast<lifecycle_msgs__msg__TransitionDescription *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_lifecycle_msgs__msg__TransitionDescription(cdr, ros_message);
}

static uint32_t _TransitionDescription__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
      untyped_ros_message, 0));
}

static size_t _TransitionDescription__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lifecycle_msgs__msg__TransitionDescription(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TransitionDescription = {
  "lifecycle_msgs::msg",
  "TransitionDescription",
  _TransitionDescription__cdr_serialize,
  _TransitionDescription__cdr_deserialize,
  _TransitionDescription__get_serialized_size,
  _TransitionDescription__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TransitionDescription__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TransitionDescription,
  get_message_typesupport_handle_function,
  &lifecycle_msgs__msg__TransitionDescription__get_type_hash,
  &lifecycle_msgs__msg__TransitionDescription__get_type_description,
  &lifecycle_msgs__msg__TransitionDescription__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, TransitionDescription)() {
  return &_TransitionDescription__type_support;
}

#if defined(__cplusplus)
}
#endif

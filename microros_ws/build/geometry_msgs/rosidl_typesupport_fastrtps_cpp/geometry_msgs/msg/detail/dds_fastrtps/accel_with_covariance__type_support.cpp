// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/AccelWithCovariance.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Accel &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Accel &);
size_t get_serialized_size(
  const geometry_msgs::msg::Accel &,
  size_t current_alignment);
size_t
max_serialized_size_Accel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::Accel &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::Accel &,
  size_t current_alignment);
size_t
max_serialized_size_key_Accel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace geometry_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
cdr_serialize(
  const geometry_msgs::msg::AccelWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accel
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.accel,
    cdr);

  // Member: covariance
  {
    cdr << ros_message.covariance;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs::msg::AccelWithCovariance & ros_message)
{
  // Member: accel
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.accel);

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
get_serialized_size(
  const geometry_msgs::msg::AccelWithCovariance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accel
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.accel, current_alignment);

  // Member: covariance
  {
    size_t array_size = 36;
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
max_serialized_size_AccelWithCovariance(
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

  // Member: accel
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Accel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: covariance
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = geometry_msgs::msg::AccelWithCovariance;
    is_plain =
      (
      offsetof(DataType, covariance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
cdr_serialize_key(
  const geometry_msgs::msg::AccelWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accel
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.accel,
    cdr);

  // Member: covariance
  {
    cdr << ros_message.covariance;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
get_serialized_size_key(
  const geometry_msgs::msg::AccelWithCovariance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accel
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.accel, current_alignment);

  // Member: covariance
  {
    size_t array_size = 36;
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
max_serialized_size_key_AccelWithCovariance(
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

  // Member: accel
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Accel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: covariance
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = geometry_msgs::msg::AccelWithCovariance;
    is_plain =
      (
      offsetof(DataType, covariance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _AccelWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::AccelWithCovariance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AccelWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<geometry_msgs::msg::AccelWithCovariance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AccelWithCovariance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::AccelWithCovariance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AccelWithCovariance__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AccelWithCovariance(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AccelWithCovariance__callbacks = {
  "geometry_msgs::msg",
  "AccelWithCovariance",
  _AccelWithCovariance__cdr_serialize,
  _AccelWithCovariance__cdr_deserialize,
  _AccelWithCovariance__get_serialized_size,
  _AccelWithCovariance__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AccelWithCovariance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AccelWithCovariance__callbacks,
  get_message_typesupport_handle_function,
  &geometry_msgs__msg__AccelWithCovariance__get_type_hash,
  &geometry_msgs__msg__AccelWithCovariance__get_type_description,
  &geometry_msgs__msg__AccelWithCovariance__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace geometry_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<geometry_msgs::msg::AccelWithCovariance>()
{
  return &geometry_msgs::msg::typesupport_fastrtps_cpp::_AccelWithCovariance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geometry_msgs, msg, AccelWithCovariance)() {
  return &geometry_msgs::msg::typesupport_fastrtps_cpp::_AccelWithCovariance__handle;
}

#ifdef __cplusplus
}
#endif

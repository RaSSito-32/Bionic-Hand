// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geometry_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseWithCovarianceStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geometry_msgs::msg::PoseWithCovarianceStamped(_init);
}

void PoseWithCovarianceStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geometry_msgs::msg::PoseWithCovarianceStamped *>(message_memory);
  typed_message->~PoseWithCovarianceStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseWithCovarianceStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::PoseWithCovarianceStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseWithCovariance>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::PoseWithCovarianceStamped, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseWithCovarianceStamped_message_members = {
  "geometry_msgs::msg",  // message namespace
  "PoseWithCovarianceStamped",  // message name
  2,  // number of fields
  sizeof(geometry_msgs::msg::PoseWithCovarianceStamped),
  false,  // has_any_key_member_
  PoseWithCovarianceStamped_message_member_array,  // message members
  PoseWithCovarianceStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseWithCovarianceStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseWithCovarianceStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseWithCovarianceStamped_message_members,
  get_message_typesupport_handle_function,
  &geometry_msgs__msg__PoseWithCovarianceStamped__get_type_hash,
  &geometry_msgs__msg__PoseWithCovarianceStamped__get_type_description,
  &geometry_msgs__msg__PoseWithCovarianceStamped__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geometry_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geometry_msgs::msg::PoseWithCovarianceStamped>()
{
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::PoseWithCovarianceStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geometry_msgs, msg, PoseWithCovarianceStamped)() {
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::PoseWithCovarianceStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nav_msgs:msg/OccupancyGrid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"
#include "nav_msgs/msg/detail/occupancy_grid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OccupancyGrid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav_msgs::msg::OccupancyGrid(_init);
}

void OccupancyGrid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav_msgs::msg::OccupancyGrid *>(message_memory);
  typed_message->~OccupancyGrid();
}

size_t size_function__OccupancyGrid__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OccupancyGrid__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OccupancyGrid__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OccupancyGrid__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__OccupancyGrid__data(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__OccupancyGrid__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__OccupancyGrid__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__OccupancyGrid__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OccupancyGrid_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::msg::OccupancyGrid, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::MapMetaData>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::msg::OccupancyGrid, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::msg::OccupancyGrid, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__OccupancyGrid__data,  // size() function pointer
    get_const_function__OccupancyGrid__data,  // get_const(index) function pointer
    get_function__OccupancyGrid__data,  // get(index) function pointer
    fetch_function__OccupancyGrid__data,  // fetch(index, &value) function pointer
    assign_function__OccupancyGrid__data,  // assign(index, value) function pointer
    resize_function__OccupancyGrid__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OccupancyGrid_message_members = {
  "nav_msgs::msg",  // message namespace
  "OccupancyGrid",  // message name
  3,  // number of fields
  sizeof(nav_msgs::msg::OccupancyGrid),
  false,  // has_any_key_member_
  OccupancyGrid_message_member_array,  // message members
  OccupancyGrid_init_function,  // function to initialize message memory (memory has to be allocated)
  OccupancyGrid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OccupancyGrid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OccupancyGrid_message_members,
  get_message_typesupport_handle_function,
  &nav_msgs__msg__OccupancyGrid__get_type_hash,
  &nav_msgs__msg__OccupancyGrid__get_type_description,
  &nav_msgs__msg__OccupancyGrid__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::msg::OccupancyGrid>()
{
  return &::nav_msgs::msg::rosidl_typesupport_introspection_cpp::OccupancyGrid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav_msgs, msg, OccupancyGrid)() {
  return &::nav_msgs::msg::rosidl_typesupport_introspection_cpp::OccupancyGrid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

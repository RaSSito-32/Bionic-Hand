// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "micro_ros_msgs/msg/detail/entity__functions.h"
#include "micro_ros_msgs/msg/detail/entity__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace micro_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Entity_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Entity_type_support_ids_t;

static const _Entity_type_support_ids_t _Entity_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Entity_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Entity_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Entity_type_support_symbol_names_t _Entity_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, micro_ros_msgs, msg, Entity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, micro_ros_msgs, msg, Entity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, micro_ros_msgs, msg, Entity)),
  }
};

typedef struct _Entity_type_support_data_t
{
  void * data[3];
} _Entity_type_support_data_t;

static _Entity_type_support_data_t _Entity_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Entity_message_typesupport_map = {
  3,
  "micro_ros_msgs",
  &_Entity_message_typesupport_ids.typesupport_identifier[0],
  &_Entity_message_typesupport_symbol_names.symbol_name[0],
  &_Entity_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Entity_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Entity_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &micro_ros_msgs__msg__Entity__get_type_hash,
  &micro_ros_msgs__msg__Entity__get_type_description,
  &micro_ros_msgs__msg__Entity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace micro_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<micro_ros_msgs::msg::Entity>()
{
  return &::micro_ros_msgs::msg::rosidl_typesupport_cpp::Entity_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, micro_ros_msgs, msg, Entity)() {
  return get_message_type_support_handle<micro_ros_msgs::msg::Entity>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

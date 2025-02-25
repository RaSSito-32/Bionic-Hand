// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "std_msgs/msg/detail/int32_multi_array__functions.h"
#include "std_msgs/msg/detail/int32_multi_array__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace std_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Int32MultiArray_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Int32MultiArray_type_support_ids_t;

static const _Int32MultiArray_type_support_ids_t _Int32MultiArray_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Int32MultiArray_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Int32MultiArray_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Int32MultiArray_type_support_symbol_names_t _Int32MultiArray_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, std_msgs, msg, Int32MultiArray)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, std_msgs, msg, Int32MultiArray)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_msgs, msg, Int32MultiArray)),
  }
};

typedef struct _Int32MultiArray_type_support_data_t
{
  void * data[3];
} _Int32MultiArray_type_support_data_t;

static _Int32MultiArray_type_support_data_t _Int32MultiArray_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Int32MultiArray_message_typesupport_map = {
  3,
  "std_msgs",
  &_Int32MultiArray_message_typesupport_ids.typesupport_identifier[0],
  &_Int32MultiArray_message_typesupport_symbol_names.symbol_name[0],
  &_Int32MultiArray_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Int32MultiArray_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Int32MultiArray_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &std_msgs__msg__Int32MultiArray__get_type_hash,
  &std_msgs__msg__Int32MultiArray__get_type_description,
  &std_msgs__msg__Int32MultiArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace std_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<std_msgs::msg::Int32MultiArray>()
{
  return &::std_msgs::msg::rosidl_typesupport_cpp::Int32MultiArray_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, std_msgs, msg, Int32MultiArray)() {
  return get_message_type_support_handle<std_msgs::msg::Int32MultiArray>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

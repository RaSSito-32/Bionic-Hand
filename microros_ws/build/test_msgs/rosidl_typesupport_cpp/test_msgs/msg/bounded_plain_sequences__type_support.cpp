// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/BoundedPlainSequences.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/msg/detail/bounded_plain_sequences__functions.h"
#include "test_msgs/msg/detail/bounded_plain_sequences__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _BoundedPlainSequences_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _BoundedPlainSequences_type_support_ids_t;

static const _BoundedPlainSequences_type_support_ids_t _BoundedPlainSequences_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _BoundedPlainSequences_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _BoundedPlainSequences_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BoundedPlainSequences_type_support_symbol_names_t _BoundedPlainSequences_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, msg, BoundedPlainSequences)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, msg, BoundedPlainSequences)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, msg, BoundedPlainSequences)),
  }
};

typedef struct _BoundedPlainSequences_type_support_data_t
{
  void * data[3];
} _BoundedPlainSequences_type_support_data_t;

static _BoundedPlainSequences_type_support_data_t _BoundedPlainSequences_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BoundedPlainSequences_message_typesupport_map = {
  3,
  "test_msgs",
  &_BoundedPlainSequences_message_typesupport_ids.typesupport_identifier[0],
  &_BoundedPlainSequences_message_typesupport_symbol_names.symbol_name[0],
  &_BoundedPlainSequences_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BoundedPlainSequences_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BoundedPlainSequences_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &test_msgs__msg__BoundedPlainSequences__get_type_hash,
  &test_msgs__msg__BoundedPlainSequences__get_type_description,
  &test_msgs__msg__BoundedPlainSequences__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::BoundedPlainSequences>()
{
  return &::test_msgs::msg::rosidl_typesupport_cpp::BoundedPlainSequences_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, test_msgs, msg, BoundedPlainSequences)() {
  return get_message_type_support_handle<test_msgs::msg::BoundedPlainSequences>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

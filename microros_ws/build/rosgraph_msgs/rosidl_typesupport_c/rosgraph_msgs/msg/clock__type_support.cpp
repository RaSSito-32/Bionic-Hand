// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosgraph_msgs/msg/detail/clock__struct.h"
#include "rosgraph_msgs/msg/detail/clock__type_support.h"
#include "rosgraph_msgs/msg/detail/clock__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosgraph_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Clock_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Clock_type_support_ids_t;

static const _Clock_type_support_ids_t _Clock_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Clock_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Clock_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Clock_type_support_symbol_names_t _Clock_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosgraph_msgs, msg, Clock)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosgraph_msgs, msg, Clock)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosgraph_msgs, msg, Clock)),
  }
};

typedef struct _Clock_type_support_data_t
{
  void * data[3];
} _Clock_type_support_data_t;

static _Clock_type_support_data_t _Clock_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Clock_message_typesupport_map = {
  3,
  "rosgraph_msgs",
  &_Clock_message_typesupport_ids.typesupport_identifier[0],
  &_Clock_message_typesupport_symbol_names.symbol_name[0],
  &_Clock_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Clock_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Clock_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rosgraph_msgs__msg__Clock__get_type_hash,
  &rosgraph_msgs__msg__Clock__get_type_description,
  &rosgraph_msgs__msg__Clock__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace rosgraph_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rosgraph_msgs, msg, Clock)() {
  return &::rosgraph_msgs::msg::rosidl_typesupport_c::Clock_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

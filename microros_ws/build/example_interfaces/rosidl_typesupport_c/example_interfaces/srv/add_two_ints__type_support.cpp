// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from example_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "example_interfaces/srv/detail/add_two_ints__struct.h"
#include "example_interfaces/srv/detail/add_two_ints__type_support.h"
#include "example_interfaces/srv/detail/add_two_ints__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddTwoInts_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _AddTwoInts_Request_type_support_ids_t;

static const _AddTwoInts_Request_type_support_ids_t _AddTwoInts_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _AddTwoInts_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _AddTwoInts_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoInts_Request_type_support_symbol_names_t _AddTwoInts_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, srv, AddTwoInts_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Request)),
  }
};

typedef struct _AddTwoInts_Request_type_support_data_t
{
  void * data[3];
} _AddTwoInts_Request_type_support_data_t;

static _AddTwoInts_Request_type_support_data_t _AddTwoInts_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoInts_Request_message_typesupport_map = {
  3,
  "example_interfaces",
  &_AddTwoInts_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoInts_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoInts_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoInts_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoInts_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &example_interfaces__srv__AddTwoInts_Request__get_type_hash,
  &example_interfaces__srv__AddTwoInts_Request__get_type_description,
  &example_interfaces__srv__AddTwoInts_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, AddTwoInts_Request)() {
  return &::example_interfaces::srv::rosidl_typesupport_c::AddTwoInts_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__struct.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__type_support.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddTwoInts_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _AddTwoInts_Response_type_support_ids_t;

static const _AddTwoInts_Response_type_support_ids_t _AddTwoInts_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _AddTwoInts_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _AddTwoInts_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoInts_Response_type_support_symbol_names_t _AddTwoInts_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, srv, AddTwoInts_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Response)),
  }
};

typedef struct _AddTwoInts_Response_type_support_data_t
{
  void * data[3];
} _AddTwoInts_Response_type_support_data_t;

static _AddTwoInts_Response_type_support_data_t _AddTwoInts_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoInts_Response_message_typesupport_map = {
  3,
  "example_interfaces",
  &_AddTwoInts_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoInts_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoInts_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoInts_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoInts_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &example_interfaces__srv__AddTwoInts_Response__get_type_hash,
  &example_interfaces__srv__AddTwoInts_Response__get_type_description,
  &example_interfaces__srv__AddTwoInts_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, AddTwoInts_Response)() {
  return &::example_interfaces::srv::rosidl_typesupport_c::AddTwoInts_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__struct.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__type_support.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddTwoInts_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _AddTwoInts_Event_type_support_ids_t;

static const _AddTwoInts_Event_type_support_ids_t _AddTwoInts_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _AddTwoInts_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _AddTwoInts_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoInts_Event_type_support_symbol_names_t _AddTwoInts_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, srv, AddTwoInts_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Event)),
  }
};

typedef struct _AddTwoInts_Event_type_support_data_t
{
  void * data[3];
} _AddTwoInts_Event_type_support_data_t;

static _AddTwoInts_Event_type_support_data_t _AddTwoInts_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoInts_Event_message_typesupport_map = {
  3,
  "example_interfaces",
  &_AddTwoInts_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoInts_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoInts_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoInts_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoInts_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &example_interfaces__srv__AddTwoInts_Event__get_type_hash,
  &example_interfaces__srv__AddTwoInts_Event__get_type_description,
  &example_interfaces__srv__AddTwoInts_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, AddTwoInts_Event)() {
  return &::example_interfaces::srv::rosidl_typesupport_c::AddTwoInts_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AddTwoInts_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _AddTwoInts_type_support_ids_t;

static const _AddTwoInts_type_support_ids_t _AddTwoInts_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _AddTwoInts_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _AddTwoInts_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoInts_type_support_symbol_names_t _AddTwoInts_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, srv, AddTwoInts)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, AddTwoInts)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts)),
  }
};

typedef struct _AddTwoInts_type_support_data_t
{
  void * data[3];
} _AddTwoInts_type_support_data_t;

static _AddTwoInts_type_support_data_t _AddTwoInts_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoInts_service_typesupport_map = {
  3,
  "example_interfaces",
  &_AddTwoInts_service_typesupport_ids.typesupport_identifier[0],
  &_AddTwoInts_service_typesupport_symbol_names.symbol_name[0],
  &_AddTwoInts_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddTwoInts_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoInts_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AddTwoInts_Request_message_type_support_handle,
  &AddTwoInts_Response_message_type_support_handle,
  &AddTwoInts_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    example_interfaces,
    srv,
    AddTwoInts
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    example_interfaces,
    srv,
    AddTwoInts
  ),
  &example_interfaces__srv__AddTwoInts__get_type_hash,
  &example_interfaces__srv__AddTwoInts__get_type_description,
  &example_interfaces__srv__AddTwoInts__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, AddTwoInts)() {
  return &::example_interfaces::srv::rosidl_typesupport_c::AddTwoInts_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

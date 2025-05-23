// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:srv/ListParameters.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rcl_interfaces/srv/detail/list_parameters__struct.h"
#include "rcl_interfaces/srv/detail/list_parameters__type_support.h"
#include "rcl_interfaces/srv/detail/list_parameters__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ListParameters_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ListParameters_Request_type_support_ids_t;

static const _ListParameters_Request_type_support_ids_t _ListParameters_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ListParameters_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ListParameters_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListParameters_Request_type_support_symbol_names_t _ListParameters_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, ListParameters_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Request)),
  }
};

typedef struct _ListParameters_Request_type_support_data_t
{
  void * data[3];
} _ListParameters_Request_type_support_data_t;

static _ListParameters_Request_type_support_data_t _ListParameters_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListParameters_Request_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_ListParameters_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ListParameters_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ListParameters_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ListParameters_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListParameters_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__ListParameters_Request__get_type_hash,
  &rcl_interfaces__srv__ListParameters_Request__get_type_description,
  &rcl_interfaces__srv__ListParameters_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, ListParameters_Request)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::ListParameters_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__type_support.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__functions.h"
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

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ListParameters_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ListParameters_Response_type_support_ids_t;

static const _ListParameters_Response_type_support_ids_t _ListParameters_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ListParameters_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ListParameters_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListParameters_Response_type_support_symbol_names_t _ListParameters_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, ListParameters_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Response)),
  }
};

typedef struct _ListParameters_Response_type_support_data_t
{
  void * data[3];
} _ListParameters_Response_type_support_data_t;

static _ListParameters_Response_type_support_data_t _ListParameters_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListParameters_Response_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_ListParameters_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ListParameters_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ListParameters_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ListParameters_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListParameters_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__ListParameters_Response__get_type_hash,
  &rcl_interfaces__srv__ListParameters_Response__get_type_description,
  &rcl_interfaces__srv__ListParameters_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, ListParameters_Response)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::ListParameters_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__type_support.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__functions.h"
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

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ListParameters_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ListParameters_Event_type_support_ids_t;

static const _ListParameters_Event_type_support_ids_t _ListParameters_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ListParameters_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ListParameters_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListParameters_Event_type_support_symbol_names_t _ListParameters_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, ListParameters_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Event)),
  }
};

typedef struct _ListParameters_Event_type_support_data_t
{
  void * data[3];
} _ListParameters_Event_type_support_data_t;

static _ListParameters_Event_type_support_data_t _ListParameters_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListParameters_Event_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_ListParameters_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ListParameters_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ListParameters_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ListParameters_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListParameters_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__ListParameters_Event__get_type_hash,
  &rcl_interfaces__srv__ListParameters_Event__get_type_description,
  &rcl_interfaces__srv__ListParameters_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, ListParameters_Event)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::ListParameters_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ListParameters_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ListParameters_type_support_ids_t;

static const _ListParameters_type_support_ids_t _ListParameters_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ListParameters_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ListParameters_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListParameters_type_support_symbol_names_t _ListParameters_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, ListParameters)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters)),
  }
};

typedef struct _ListParameters_type_support_data_t
{
  void * data[3];
} _ListParameters_type_support_data_t;

static _ListParameters_type_support_data_t _ListParameters_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListParameters_service_typesupport_map = {
  3,
  "rcl_interfaces",
  &_ListParameters_service_typesupport_ids.typesupport_identifier[0],
  &_ListParameters_service_typesupport_symbol_names.symbol_name[0],
  &_ListParameters_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ListParameters_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListParameters_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ListParameters_Request_message_type_support_handle,
  &ListParameters_Response_message_type_support_handle,
  &ListParameters_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    ListParameters
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    ListParameters
  ),
  &rcl_interfaces__srv__ListParameters__get_type_hash,
  &rcl_interfaces__srv__ListParameters__get_type_description,
  &rcl_interfaces__srv__ListParameters__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, ListParameters)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::ListParameters_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

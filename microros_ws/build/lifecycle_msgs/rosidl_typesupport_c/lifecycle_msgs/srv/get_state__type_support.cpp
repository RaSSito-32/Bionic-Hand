// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lifecycle_msgs/srv/detail/get_state__struct.h"
#include "lifecycle_msgs/srv/detail/get_state__type_support.h"
#include "lifecycle_msgs/srv/detail/get_state__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetState_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetState_Request_type_support_ids_t;

static const _GetState_Request_type_support_ids_t _GetState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetState_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetState_Request_type_support_symbol_names_t _GetState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request)),
  }
};

typedef struct _GetState_Request_type_support_data_t
{
  void * data[3];
} _GetState_Request_type_support_data_t;

static _GetState_Request_type_support_data_t _GetState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetState_Request_message_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_GetState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetState_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetState_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &lifecycle_msgs__srv__GetState_Request__get_type_hash,
  &lifecycle_msgs__srv__GetState_Request__get_type_description,
  &lifecycle_msgs__srv__GetState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetState_Request)() {
  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__type_support.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__functions.h"
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

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetState_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetState_Response_type_support_ids_t;

static const _GetState_Response_type_support_ids_t _GetState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetState_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetState_Response_type_support_symbol_names_t _GetState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response)),
  }
};

typedef struct _GetState_Response_type_support_data_t
{
  void * data[3];
} _GetState_Response_type_support_data_t;

static _GetState_Response_type_support_data_t _GetState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetState_Response_message_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_GetState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetState_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetState_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &lifecycle_msgs__srv__GetState_Response__get_type_hash,
  &lifecycle_msgs__srv__GetState_Response__get_type_description,
  &lifecycle_msgs__srv__GetState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetState_Response)() {
  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__type_support.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__functions.h"
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

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetState_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetState_Event_type_support_ids_t;

static const _GetState_Event_type_support_ids_t _GetState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetState_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetState_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetState_Event_type_support_symbol_names_t _GetState_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Event)),
  }
};

typedef struct _GetState_Event_type_support_data_t
{
  void * data[3];
} _GetState_Event_type_support_data_t;

static _GetState_Event_type_support_data_t _GetState_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetState_Event_message_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_GetState_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetState_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetState_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetState_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetState_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &lifecycle_msgs__srv__GetState_Event__get_type_hash,
  &lifecycle_msgs__srv__GetState_Event__get_type_description,
  &lifecycle_msgs__srv__GetState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetState_Event)() {
  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetState_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetState_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetState_type_support_ids_t;

static const _GetState_type_support_ids_t _GetState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetState_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetState_type_support_symbol_names_t _GetState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState)),
  }
};

typedef struct _GetState_type_support_data_t
{
  void * data[3];
} _GetState_type_support_data_t;

static _GetState_type_support_data_t _GetState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetState_service_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_GetState_service_typesupport_ids.typesupport_identifier[0],
  &_GetState_service_typesupport_symbol_names.symbol_name[0],
  &_GetState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetState_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetState_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetState_Request_message_type_support_handle,
  &GetState_Response_message_type_support_handle,
  &GetState_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    lifecycle_msgs,
    srv,
    GetState
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    lifecycle_msgs,
    srv,
    GetState
  ),
  &lifecycle_msgs__srv__GetState__get_type_hash,
  &lifecycle_msgs__srv__GetState__get_type_description,
  &lifecycle_msgs__srv__GetState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetState)() {
  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetState_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

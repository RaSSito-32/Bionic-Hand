// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "diagnostic_msgs/srv/detail/self_test__functions.h"
#include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace diagnostic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SelfTest_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SelfTest_Request_type_support_ids_t;

static const _SelfTest_Request_type_support_ids_t _SelfTest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SelfTest_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SelfTest_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SelfTest_Request_type_support_symbol_names_t _SelfTest_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, diagnostic_msgs, srv, SelfTest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, srv, SelfTest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, srv, SelfTest_Request)),
  }
};

typedef struct _SelfTest_Request_type_support_data_t
{
  void * data[3];
} _SelfTest_Request_type_support_data_t;

static _SelfTest_Request_type_support_data_t _SelfTest_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SelfTest_Request_message_typesupport_map = {
  3,
  "diagnostic_msgs",
  &_SelfTest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SelfTest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SelfTest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SelfTest_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SelfTest_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &diagnostic_msgs__srv__SelfTest_Request__get_type_hash,
  &diagnostic_msgs__srv__SelfTest_Request__get_type_description,
  &diagnostic_msgs__srv__SelfTest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Request>()
{
  return &::diagnostic_msgs::srv::rosidl_typesupport_cpp::SelfTest_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, diagnostic_msgs, srv, SelfTest_Request)() {
  return get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__functions.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace diagnostic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SelfTest_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SelfTest_Response_type_support_ids_t;

static const _SelfTest_Response_type_support_ids_t _SelfTest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SelfTest_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SelfTest_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SelfTest_Response_type_support_symbol_names_t _SelfTest_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, diagnostic_msgs, srv, SelfTest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, srv, SelfTest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, srv, SelfTest_Response)),
  }
};

typedef struct _SelfTest_Response_type_support_data_t
{
  void * data[3];
} _SelfTest_Response_type_support_data_t;

static _SelfTest_Response_type_support_data_t _SelfTest_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SelfTest_Response_message_typesupport_map = {
  3,
  "diagnostic_msgs",
  &_SelfTest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SelfTest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SelfTest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SelfTest_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SelfTest_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &diagnostic_msgs__srv__SelfTest_Response__get_type_hash,
  &diagnostic_msgs__srv__SelfTest_Response__get_type_description,
  &diagnostic_msgs__srv__SelfTest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Response>()
{
  return &::diagnostic_msgs::srv::rosidl_typesupport_cpp::SelfTest_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, diagnostic_msgs, srv, SelfTest_Response)() {
  return get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__functions.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace diagnostic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SelfTest_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SelfTest_Event_type_support_ids_t;

static const _SelfTest_Event_type_support_ids_t _SelfTest_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SelfTest_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SelfTest_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SelfTest_Event_type_support_symbol_names_t _SelfTest_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, diagnostic_msgs, srv, SelfTest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, srv, SelfTest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, srv, SelfTest_Event)),
  }
};

typedef struct _SelfTest_Event_type_support_data_t
{
  void * data[3];
} _SelfTest_Event_type_support_data_t;

static _SelfTest_Event_type_support_data_t _SelfTest_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SelfTest_Event_message_typesupport_map = {
  3,
  "diagnostic_msgs",
  &_SelfTest_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SelfTest_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SelfTest_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SelfTest_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SelfTest_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &diagnostic_msgs__srv__SelfTest_Event__get_type_hash,
  &diagnostic_msgs__srv__SelfTest_Event__get_type_description,
  &diagnostic_msgs__srv__SelfTest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Event>()
{
  return &::diagnostic_msgs::srv::rosidl_typesupport_cpp::SelfTest_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, diagnostic_msgs, srv, SelfTest_Event)() {
  return get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace diagnostic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SelfTest_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SelfTest_type_support_ids_t;

static const _SelfTest_type_support_ids_t _SelfTest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SelfTest_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SelfTest_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SelfTest_type_support_symbol_names_t _SelfTest_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, diagnostic_msgs, srv, SelfTest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, srv, SelfTest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, srv, SelfTest)),
  }
};

typedef struct _SelfTest_type_support_data_t
{
  void * data[3];
} _SelfTest_type_support_data_t;

static _SelfTest_type_support_data_t _SelfTest_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SelfTest_service_typesupport_map = {
  3,
  "diagnostic_msgs",
  &_SelfTest_service_typesupport_ids.typesupport_identifier[0],
  &_SelfTest_service_typesupport_symbol_names.symbol_name[0],
  &_SelfTest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SelfTest_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SelfTest_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<diagnostic_msgs::srv::SelfTest>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<diagnostic_msgs::srv::SelfTest>,
  &diagnostic_msgs__srv__SelfTest__get_type_hash,
  &diagnostic_msgs__srv__SelfTest__get_type_description,
  &diagnostic_msgs__srv__SelfTest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<diagnostic_msgs::srv::SelfTest>()
{
  return &::diagnostic_msgs::srv::rosidl_typesupport_cpp::SelfTest_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, diagnostic_msgs, srv, SelfTest)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<diagnostic_msgs::srv::SelfTest>();
}

#ifdef __cplusplus
}
#endif

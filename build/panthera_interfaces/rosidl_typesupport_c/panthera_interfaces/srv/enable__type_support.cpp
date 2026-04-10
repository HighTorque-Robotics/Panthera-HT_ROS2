// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from panthera_interfaces:srv/Enable.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "panthera_interfaces/srv/detail/enable__struct.h"
#include "panthera_interfaces/srv/detail/enable__type_support.h"
#include "panthera_interfaces/srv/detail/enable__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace panthera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Enable_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Enable_Request_type_support_ids_t;

static const _Enable_Request_type_support_ids_t _Enable_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Enable_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Enable_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Enable_Request_type_support_symbol_names_t _Enable_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, Enable_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Request)),
  }
};

typedef struct _Enable_Request_type_support_data_t
{
  void * data[2];
} _Enable_Request_type_support_data_t;

static _Enable_Request_type_support_data_t _Enable_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Enable_Request_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_Enable_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Enable_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Enable_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Enable_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Enable_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Request__get_type_hash,
  &panthera_interfaces__srv__Enable_Request__get_type_description,
  &panthera_interfaces__srv__Enable_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, Enable_Request)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::Enable_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__type_support.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__functions.h"
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

namespace panthera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Enable_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Enable_Response_type_support_ids_t;

static const _Enable_Response_type_support_ids_t _Enable_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Enable_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Enable_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Enable_Response_type_support_symbol_names_t _Enable_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, Enable_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Response)),
  }
};

typedef struct _Enable_Response_type_support_data_t
{
  void * data[2];
} _Enable_Response_type_support_data_t;

static _Enable_Response_type_support_data_t _Enable_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Enable_Response_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_Enable_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Enable_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Enable_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Enable_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Enable_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Response__get_type_hash,
  &panthera_interfaces__srv__Enable_Response__get_type_description,
  &panthera_interfaces__srv__Enable_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, Enable_Response)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::Enable_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__type_support.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__functions.h"
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

namespace panthera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Enable_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Enable_Event_type_support_ids_t;

static const _Enable_Event_type_support_ids_t _Enable_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Enable_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Enable_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Enable_Event_type_support_symbol_names_t _Enable_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, Enable_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Event)),
  }
};

typedef struct _Enable_Event_type_support_data_t
{
  void * data[2];
} _Enable_Event_type_support_data_t;

static _Enable_Event_type_support_data_t _Enable_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Enable_Event_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_Enable_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Enable_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Enable_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Enable_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Enable_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Event__get_type_hash,
  &panthera_interfaces__srv__Enable_Event__get_type_description,
  &panthera_interfaces__srv__Enable_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, Enable_Event)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::Enable_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace panthera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Enable_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Enable_type_support_ids_t;

static const _Enable_type_support_ids_t _Enable_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Enable_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Enable_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Enable_type_support_symbol_names_t _Enable_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, Enable)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable)),
  }
};

typedef struct _Enable_type_support_data_t
{
  void * data[2];
} _Enable_type_support_data_t;

static _Enable_type_support_data_t _Enable_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Enable_service_typesupport_map = {
  2,
  "panthera_interfaces",
  &_Enable_service_typesupport_ids.typesupport_identifier[0],
  &_Enable_service_typesupport_symbol_names.symbol_name[0],
  &_Enable_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Enable_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Enable_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Enable_Request_message_type_support_handle,
  &Enable_Response_message_type_support_handle,
  &Enable_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    panthera_interfaces,
    srv,
    Enable
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    panthera_interfaces,
    srv,
    Enable
  ),
  &panthera_interfaces__srv__Enable__get_type_hash,
  &panthera_interfaces__srv__Enable__get_type_description,
  &panthera_interfaces__srv__Enable__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, Enable)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::Enable_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

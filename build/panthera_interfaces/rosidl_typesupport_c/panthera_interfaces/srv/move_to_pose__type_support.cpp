// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from panthera_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "panthera_interfaces/srv/detail/move_to_pose__struct.h"
#include "panthera_interfaces/srv/detail/move_to_pose__type_support.h"
#include "panthera_interfaces/srv/detail/move_to_pose__functions.h"
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

typedef struct _MoveToPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPose_Request_type_support_ids_t;

static const _MoveToPose_Request_type_support_ids_t _MoveToPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPose_Request_type_support_symbol_names_t _MoveToPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToPose_Request)),
  }
};

typedef struct _MoveToPose_Request_type_support_data_t
{
  void * data[2];
} _MoveToPose_Request_type_support_data_t;

static _MoveToPose_Request_type_support_data_t _MoveToPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPose_Request_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPose_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPose_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__MoveToPose_Request__get_type_hash,
  &panthera_interfaces__srv__MoveToPose_Request__get_type_description,
  &panthera_interfaces__srv__MoveToPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToPose_Request)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__type_support.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__functions.h"
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

typedef struct _MoveToPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPose_Response_type_support_ids_t;

static const _MoveToPose_Response_type_support_ids_t _MoveToPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPose_Response_type_support_symbol_names_t _MoveToPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToPose_Response)),
  }
};

typedef struct _MoveToPose_Response_type_support_data_t
{
  void * data[2];
} _MoveToPose_Response_type_support_data_t;

static _MoveToPose_Response_type_support_data_t _MoveToPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPose_Response_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPose_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPose_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__MoveToPose_Response__get_type_hash,
  &panthera_interfaces__srv__MoveToPose_Response__get_type_description,
  &panthera_interfaces__srv__MoveToPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToPose_Response)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__type_support.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__functions.h"
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

typedef struct _MoveToPose_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPose_Event_type_support_ids_t;

static const _MoveToPose_Event_type_support_ids_t _MoveToPose_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPose_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPose_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPose_Event_type_support_symbol_names_t _MoveToPose_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToPose_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToPose_Event)),
  }
};

typedef struct _MoveToPose_Event_type_support_data_t
{
  void * data[2];
} _MoveToPose_Event_type_support_data_t;

static _MoveToPose_Event_type_support_data_t _MoveToPose_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPose_Event_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToPose_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPose_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPose_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPose_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPose_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__MoveToPose_Event__get_type_hash,
  &panthera_interfaces__srv__MoveToPose_Event__get_type_description,
  &panthera_interfaces__srv__MoveToPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToPose_Event)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_pose__type_support.h"
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
typedef struct _MoveToPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPose_type_support_ids_t;

static const _MoveToPose_type_support_ids_t _MoveToPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPose_type_support_symbol_names_t _MoveToPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToPose)),
  }
};

typedef struct _MoveToPose_type_support_data_t
{
  void * data[2];
} _MoveToPose_type_support_data_t;

static _MoveToPose_type_support_data_t _MoveToPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPose_service_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToPose_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToPose_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToPose_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPose_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveToPose_Request_message_type_support_handle,
  &MoveToPose_Response_message_type_support_handle,
  &MoveToPose_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    panthera_interfaces,
    srv,
    MoveToPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    panthera_interfaces,
    srv,
    MoveToPose
  ),
  &panthera_interfaces__srv__MoveToPose__get_type_hash,
  &panthera_interfaces__srv__MoveToPose__get_type_description,
  &panthera_interfaces__srv__MoveToPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToPose)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToPose_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

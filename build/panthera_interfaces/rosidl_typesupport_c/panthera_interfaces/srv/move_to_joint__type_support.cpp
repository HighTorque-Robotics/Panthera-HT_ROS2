// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from panthera_interfaces:srv/MoveToJoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "panthera_interfaces/srv/detail/move_to_joint__struct.h"
#include "panthera_interfaces/srv/detail/move_to_joint__type_support.h"
#include "panthera_interfaces/srv/detail/move_to_joint__functions.h"
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

typedef struct _MoveToJoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToJoint_Request_type_support_ids_t;

static const _MoveToJoint_Request_type_support_ids_t _MoveToJoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToJoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToJoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToJoint_Request_type_support_symbol_names_t _MoveToJoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToJoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToJoint_Request)),
  }
};

typedef struct _MoveToJoint_Request_type_support_data_t
{
  void * data[2];
} _MoveToJoint_Request_type_support_data_t;

static _MoveToJoint_Request_type_support_data_t _MoveToJoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToJoint_Request_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToJoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToJoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToJoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToJoint_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToJoint_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__MoveToJoint_Request__get_type_hash,
  &panthera_interfaces__srv__MoveToJoint_Request__get_type_description,
  &panthera_interfaces__srv__MoveToJoint_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToJoint_Request)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToJoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__type_support.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__functions.h"
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

typedef struct _MoveToJoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToJoint_Response_type_support_ids_t;

static const _MoveToJoint_Response_type_support_ids_t _MoveToJoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToJoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToJoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToJoint_Response_type_support_symbol_names_t _MoveToJoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToJoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToJoint_Response)),
  }
};

typedef struct _MoveToJoint_Response_type_support_data_t
{
  void * data[2];
} _MoveToJoint_Response_type_support_data_t;

static _MoveToJoint_Response_type_support_data_t _MoveToJoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToJoint_Response_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToJoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToJoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToJoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToJoint_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToJoint_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__MoveToJoint_Response__get_type_hash,
  &panthera_interfaces__srv__MoveToJoint_Response__get_type_description,
  &panthera_interfaces__srv__MoveToJoint_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToJoint_Response)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToJoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__type_support.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__functions.h"
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

typedef struct _MoveToJoint_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToJoint_Event_type_support_ids_t;

static const _MoveToJoint_Event_type_support_ids_t _MoveToJoint_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToJoint_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToJoint_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToJoint_Event_type_support_symbol_names_t _MoveToJoint_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToJoint_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToJoint_Event)),
  }
};

typedef struct _MoveToJoint_Event_type_support_data_t
{
  void * data[2];
} _MoveToJoint_Event_type_support_data_t;

static _MoveToJoint_Event_type_support_data_t _MoveToJoint_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToJoint_Event_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToJoint_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToJoint_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToJoint_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToJoint_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToJoint_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__srv__MoveToJoint_Event__get_type_hash,
  &panthera_interfaces__srv__MoveToJoint_Event__get_type_description,
  &panthera_interfaces__srv__MoveToJoint_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToJoint_Event)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToJoint_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panthera_interfaces/srv/detail/move_to_joint__type_support.h"
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
typedef struct _MoveToJoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToJoint_type_support_ids_t;

static const _MoveToJoint_type_support_ids_t _MoveToJoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToJoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToJoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToJoint_type_support_symbol_names_t _MoveToJoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, srv, MoveToJoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, MoveToJoint)),
  }
};

typedef struct _MoveToJoint_type_support_data_t
{
  void * data[2];
} _MoveToJoint_type_support_data_t;

static _MoveToJoint_type_support_data_t _MoveToJoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToJoint_service_typesupport_map = {
  2,
  "panthera_interfaces",
  &_MoveToJoint_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToJoint_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToJoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToJoint_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToJoint_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveToJoint_Request_message_type_support_handle,
  &MoveToJoint_Response_message_type_support_handle,
  &MoveToJoint_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    panthera_interfaces,
    srv,
    MoveToJoint
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    panthera_interfaces,
    srv,
    MoveToJoint
  ),
  &panthera_interfaces__srv__MoveToJoint__get_type_hash,
  &panthera_interfaces__srv__MoveToJoint__get_type_description,
  &panthera_interfaces__srv__MoveToJoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, srv, MoveToJoint)() {
  return &::panthera_interfaces::srv::rosidl_typesupport_c::MoveToJoint_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

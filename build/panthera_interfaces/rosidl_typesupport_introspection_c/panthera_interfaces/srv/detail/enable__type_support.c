// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panthera_interfaces:srv/Enable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panthera_interfaces/srv/detail/enable__rosidl_typesupport_introspection_c.h"
#include "panthera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panthera_interfaces/srv/detail/enable__functions.h"
#include "panthera_interfaces/srv/detail/enable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panthera_interfaces__srv__Enable_Request__init(message_memory);
}

void panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_fini_function(void * message_memory)
{
  panthera_interfaces__srv__Enable_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_member_array[1] = {
  {
    "enable_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__srv__Enable_Request, enable_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_members = {
  "panthera_interfaces__srv",  // message namespace
  "Enable_Request",  // message name
  1,  // number of fields
  sizeof(panthera_interfaces__srv__Enable_Request),
  false,  // has_any_key_member_
  panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_member_array,  // message members
  panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle = {
  0,
  &panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_members,
  get_message_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Request__get_type_hash,
  &panthera_interfaces__srv__Enable_Request__get_type_description,
  &panthera_interfaces__srv__Enable_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panthera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Request)() {
  if (!panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle.typesupport_identifier) {
    panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panthera_interfaces/srv/detail/enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panthera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__functions.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panthera_interfaces__srv__Enable_Response__init(message_memory);
}

void panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_fini_function(void * message_memory)
{
  panthera_interfaces__srv__Enable_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_member_array[1] = {
  {
    "enable_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__srv__Enable_Response, enable_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_members = {
  "panthera_interfaces__srv",  // message namespace
  "Enable_Response",  // message name
  1,  // number of fields
  sizeof(panthera_interfaces__srv__Enable_Response),
  false,  // has_any_key_member_
  panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_member_array,  // message members
  panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle = {
  0,
  &panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_members,
  get_message_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Response__get_type_hash,
  &panthera_interfaces__srv__Enable_Response__get_type_description,
  &panthera_interfaces__srv__Enable_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panthera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Response)() {
  if (!panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle.typesupport_identifier) {
    panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panthera_interfaces/srv/detail/enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panthera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__functions.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "panthera_interfaces/srv/enable.h"
// Member `request`
// Member `response`
// already included above
// #include "panthera_interfaces/srv/detail/enable__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panthera_interfaces__srv__Enable_Event__init(message_memory);
}

void panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_fini_function(void * message_memory)
{
  panthera_interfaces__srv__Enable_Event__fini(message_memory);
}

size_t panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__size_function__Enable_Event__request(
  const void * untyped_member)
{
  const panthera_interfaces__srv__Enable_Request__Sequence * member =
    (const panthera_interfaces__srv__Enable_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_const_function__Enable_Event__request(
  const void * untyped_member, size_t index)
{
  const panthera_interfaces__srv__Enable_Request__Sequence * member =
    (const panthera_interfaces__srv__Enable_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_function__Enable_Event__request(
  void * untyped_member, size_t index)
{
  panthera_interfaces__srv__Enable_Request__Sequence * member =
    (panthera_interfaces__srv__Enable_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__fetch_function__Enable_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const panthera_interfaces__srv__Enable_Request * item =
    ((const panthera_interfaces__srv__Enable_Request *)
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_const_function__Enable_Event__request(untyped_member, index));
  panthera_interfaces__srv__Enable_Request * value =
    (panthera_interfaces__srv__Enable_Request *)(untyped_value);
  *value = *item;
}

void panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__assign_function__Enable_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  panthera_interfaces__srv__Enable_Request * item =
    ((panthera_interfaces__srv__Enable_Request *)
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_function__Enable_Event__request(untyped_member, index));
  const panthera_interfaces__srv__Enable_Request * value =
    (const panthera_interfaces__srv__Enable_Request *)(untyped_value);
  *item = *value;
}

bool panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__resize_function__Enable_Event__request(
  void * untyped_member, size_t size)
{
  panthera_interfaces__srv__Enable_Request__Sequence * member =
    (panthera_interfaces__srv__Enable_Request__Sequence *)(untyped_member);
  panthera_interfaces__srv__Enable_Request__Sequence__fini(member);
  return panthera_interfaces__srv__Enable_Request__Sequence__init(member, size);
}

size_t panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__size_function__Enable_Event__response(
  const void * untyped_member)
{
  const panthera_interfaces__srv__Enable_Response__Sequence * member =
    (const panthera_interfaces__srv__Enable_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_const_function__Enable_Event__response(
  const void * untyped_member, size_t index)
{
  const panthera_interfaces__srv__Enable_Response__Sequence * member =
    (const panthera_interfaces__srv__Enable_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_function__Enable_Event__response(
  void * untyped_member, size_t index)
{
  panthera_interfaces__srv__Enable_Response__Sequence * member =
    (panthera_interfaces__srv__Enable_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__fetch_function__Enable_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const panthera_interfaces__srv__Enable_Response * item =
    ((const panthera_interfaces__srv__Enable_Response *)
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_const_function__Enable_Event__response(untyped_member, index));
  panthera_interfaces__srv__Enable_Response * value =
    (panthera_interfaces__srv__Enable_Response *)(untyped_value);
  *value = *item;
}

void panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__assign_function__Enable_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  panthera_interfaces__srv__Enable_Response * item =
    ((panthera_interfaces__srv__Enable_Response *)
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_function__Enable_Event__response(untyped_member, index));
  const panthera_interfaces__srv__Enable_Response * value =
    (const panthera_interfaces__srv__Enable_Response *)(untyped_value);
  *item = *value;
}

bool panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__resize_function__Enable_Event__response(
  void * untyped_member, size_t size)
{
  panthera_interfaces__srv__Enable_Response__Sequence * member =
    (panthera_interfaces__srv__Enable_Response__Sequence *)(untyped_member);
  panthera_interfaces__srv__Enable_Response__Sequence__fini(member);
  return panthera_interfaces__srv__Enable_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__srv__Enable_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(panthera_interfaces__srv__Enable_Event, request),  // bytes offset in struct
    NULL,  // default value
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__size_function__Enable_Event__request,  // size() function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_const_function__Enable_Event__request,  // get_const(index) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_function__Enable_Event__request,  // get(index) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__fetch_function__Enable_Event__request,  // fetch(index, &value) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__assign_function__Enable_Event__request,  // assign(index, value) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__resize_function__Enable_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(panthera_interfaces__srv__Enable_Event, response),  // bytes offset in struct
    NULL,  // default value
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__size_function__Enable_Event__response,  // size() function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_const_function__Enable_Event__response,  // get_const(index) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__get_function__Enable_Event__response,  // get(index) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__fetch_function__Enable_Event__response,  // fetch(index, &value) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__assign_function__Enable_Event__response,  // assign(index, value) function pointer
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__resize_function__Enable_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_members = {
  "panthera_interfaces__srv",  // message namespace
  "Enable_Event",  // message name
  3,  // number of fields
  sizeof(panthera_interfaces__srv__Enable_Event),
  false,  // has_any_key_member_
  panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_member_array,  // message members
  panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_type_support_handle = {
  0,
  &panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_members,
  get_message_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Event__get_type_hash,
  &panthera_interfaces__srv__Enable_Event__get_type_description,
  &panthera_interfaces__srv__Enable_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panthera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Event)() {
  panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Request)();
  panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Response)();
  if (!panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_type_support_handle.typesupport_identifier) {
    panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panthera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panthera_interfaces/srv/detail/enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_members = {
  "panthera_interfaces__srv",  // service namespace
  "Enable",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle,
  NULL,  // response message
  // panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle
  NULL  // event_message
  // panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle
};


static rosidl_service_type_support_t panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle = {
  0,
  &panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_members,
  get_service_typesupport_handle_function,
  &panthera_interfaces__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle,
  &panthera_interfaces__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle,
  &panthera_interfaces__srv__Enable_Event__rosidl_typesupport_introspection_c__Enable_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panthera_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable)(void) {
  if (!panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle.typesupport_identifier) {
    panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, srv, Enable_Event)()->data;
  }

  return &panthera_interfaces__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle;
}

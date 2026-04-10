// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:srv/Enable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/enable.h"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__STRUCT_H_
#define PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Enable in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__Enable_Request
{
  bool enable_request;
} panthera_interfaces__srv__Enable_Request;

// Struct for a sequence of panthera_interfaces__srv__Enable_Request.
typedef struct panthera_interfaces__srv__Enable_Request__Sequence
{
  panthera_interfaces__srv__Enable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__Enable_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Enable in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__Enable_Response
{
  bool enable_response;
} panthera_interfaces__srv__Enable_Response;

// Struct for a sequence of panthera_interfaces__srv__Enable_Response.
typedef struct panthera_interfaces__srv__Enable_Response__Sequence
{
  panthera_interfaces__srv__Enable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__Enable_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  panthera_interfaces__srv__Enable_Event__request__MAX_SIZE = 1
};
// response
enum
{
  panthera_interfaces__srv__Enable_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Enable in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__Enable_Event
{
  service_msgs__msg__ServiceEventInfo info;
  panthera_interfaces__srv__Enable_Request__Sequence request;
  panthera_interfaces__srv__Enable_Response__Sequence response;
} panthera_interfaces__srv__Enable_Event;

// Struct for a sequence of panthera_interfaces__srv__Enable_Event.
typedef struct panthera_interfaces__srv__Enable_Event__Sequence
{
  panthera_interfaces__srv__Enable_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__Enable_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__STRUCT_H_

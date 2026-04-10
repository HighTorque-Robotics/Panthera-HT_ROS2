// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:srv/GoZero.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/go_zero.h"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__STRUCT_H_
#define PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GoZero in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GoZero_Request
{
  bool use_mit_mode;
} panthera_interfaces__srv__GoZero_Request;

// Struct for a sequence of panthera_interfaces__srv__GoZero_Request.
typedef struct panthera_interfaces__srv__GoZero_Request__Sequence
{
  panthera_interfaces__srv__GoZero_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GoZero_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GoZero in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GoZero_Response
{
  int64_t code;
  bool status;
} panthera_interfaces__srv__GoZero_Response;

// Struct for a sequence of panthera_interfaces__srv__GoZero_Response.
typedef struct panthera_interfaces__srv__GoZero_Response__Sequence
{
  panthera_interfaces__srv__GoZero_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GoZero_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  panthera_interfaces__srv__GoZero_Event__request__MAX_SIZE = 1
};
// response
enum
{
  panthera_interfaces__srv__GoZero_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GoZero in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GoZero_Event
{
  service_msgs__msg__ServiceEventInfo info;
  panthera_interfaces__srv__GoZero_Request__Sequence request;
  panthera_interfaces__srv__GoZero_Response__Sequence response;
} panthera_interfaces__srv__GoZero_Event;

// Struct for a sequence of panthera_interfaces__srv__GoZero_Event.
typedef struct panthera_interfaces__srv__GoZero_Event__Sequence
{
  panthera_interfaces__srv__GoZero_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GoZero_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__STRUCT_H_

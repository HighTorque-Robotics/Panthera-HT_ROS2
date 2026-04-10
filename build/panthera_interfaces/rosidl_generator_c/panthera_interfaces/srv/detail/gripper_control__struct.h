// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:srv/GripperControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/gripper_control.h"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__STRUCT_H_
#define PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GripperControl in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GripperControl_Request
{
  rosidl_runtime_c__String action;
} panthera_interfaces__srv__GripperControl_Request;

// Struct for a sequence of panthera_interfaces__srv__GripperControl_Request.
typedef struct panthera_interfaces__srv__GripperControl_Request__Sequence
{
  panthera_interfaces__srv__GripperControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GripperControl_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GripperControl in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GripperControl_Response
{
  bool success;
  rosidl_runtime_c__String message;
} panthera_interfaces__srv__GripperControl_Response;

// Struct for a sequence of panthera_interfaces__srv__GripperControl_Response.
typedef struct panthera_interfaces__srv__GripperControl_Response__Sequence
{
  panthera_interfaces__srv__GripperControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GripperControl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  panthera_interfaces__srv__GripperControl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  panthera_interfaces__srv__GripperControl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GripperControl in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GripperControl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  panthera_interfaces__srv__GripperControl_Request__Sequence request;
  panthera_interfaces__srv__GripperControl_Response__Sequence response;
} panthera_interfaces__srv__GripperControl_Event;

// Struct for a sequence of panthera_interfaces__srv__GripperControl_Event.
typedef struct panthera_interfaces__srv__GripperControl_Event__Sequence
{
  panthera_interfaces__srv__GripperControl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GripperControl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__STRUCT_H_

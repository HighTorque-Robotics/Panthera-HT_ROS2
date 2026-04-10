// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:srv/GripperSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/gripper_srv.h"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__STRUCT_H_
#define PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperSrv in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GripperSrv_Request
{
  /// Target gripper position (meters, 0.0~0.04)
  double gripper_angle;
  /// Max effort/torque
  double gripper_effort;
  /// 0=position mode, 1=effort mode
  uint8_t gripper_code;
  /// If true, reset gripper zero position
  bool set_zero;
} panthera_interfaces__srv__GripperSrv_Request;

// Struct for a sequence of panthera_interfaces__srv__GripperSrv_Request.
typedef struct panthera_interfaces__srv__GripperSrv_Request__Sequence
{
  panthera_interfaces__srv__GripperSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GripperSrv_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GripperSrv in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GripperSrv_Response
{
  /// 0=success, non-zero=error code
  int64_t code;
  bool status;
} panthera_interfaces__srv__GripperSrv_Response;

// Struct for a sequence of panthera_interfaces__srv__GripperSrv_Response.
typedef struct panthera_interfaces__srv__GripperSrv_Response__Sequence
{
  panthera_interfaces__srv__GripperSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GripperSrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  panthera_interfaces__srv__GripperSrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  panthera_interfaces__srv__GripperSrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GripperSrv in the package panthera_interfaces.
typedef struct panthera_interfaces__srv__GripperSrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  panthera_interfaces__srv__GripperSrv_Request__Sequence request;
  panthera_interfaces__srv__GripperSrv_Response__Sequence response;
} panthera_interfaces__srv__GripperSrv_Event;

// Struct for a sequence of panthera_interfaces__srv__GripperSrv_Event.
typedef struct panthera_interfaces__srv__GripperSrv_Event__Sequence
{
  panthera_interfaces__srv__GripperSrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__srv__GripperSrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__STRUCT_H_

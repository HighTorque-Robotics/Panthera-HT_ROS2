// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:msg/EndPoseEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/end_pose_euler.h"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__STRUCT_H_
#define PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/EndPoseEuler in the package panthera_interfaces.
/**
  * EndPoseEuler.msg - End-effector pose feedback in Euler angles
 */
typedef struct panthera_interfaces__msg__EndPoseEuler
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double z;
  double roll;
  double pitch;
  double yaw;
} panthera_interfaces__msg__EndPoseEuler;

// Struct for a sequence of panthera_interfaces__msg__EndPoseEuler.
typedef struct panthera_interfaces__msg__EndPoseEuler__Sequence
{
  panthera_interfaces__msg__EndPoseEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__msg__EndPoseEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_status.h"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__STRUCT_H_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__STRUCT_H_

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
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ArmStatus in the package panthera_interfaces.
/**
  * ArmStatus.msg - Arm status feedback
 */
typedef struct panthera_interfaces__msg__ArmStatus
{
  std_msgs__msg__Header header;
  /// Overall arm state
  /// Whether the arm is enabled and accepting commands
  bool arm_enabled;
  /// 0=idle, 1=moving, 2=error
  uint8_t motion_status;
  /// Human-readable error description
  rosidl_runtime_c__String error_message;
  /// Per-motor mode and fault
  /// Control mode per motor
  uint8_t motor_modes[6];
  /// Fault code per motor (0 = no fault)
  uint8_t motor_faults[6];
  /// Joint limit flags: true means the joint has hit its position limit
  bool joint_at_limit[6];
  /// Gripper state
  /// Gripper position
  double gripper_position;
  /// Gripper motor fault code
  uint8_t gripper_fault;
} panthera_interfaces__msg__ArmStatus;

// Struct for a sequence of panthera_interfaces__msg__ArmStatus.
typedef struct panthera_interfaces__msg__ArmStatus__Sequence
{
  panthera_interfaces__msg__ArmStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__msg__ArmStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__STRUCT_H_

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panthera_interfaces/msg/detail/arm_status__rosidl_typesupport_introspection_c.h"
#include "panthera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panthera_interfaces/msg/detail/arm_status__functions.h"
#include "panthera_interfaces/msg/detail/arm_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panthera_interfaces__msg__ArmStatus__init(message_memory);
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_fini_function(void * message_memory)
{
  panthera_interfaces__msg__ArmStatus__fini(message_memory);
}

size_t panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__motor_modes(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__motor_modes(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__motor_modes(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__motor_modes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__motor_modes(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__motor_modes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__motor_modes(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__motor_faults(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__motor_faults(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__motor_faults(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__motor_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__motor_faults(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__motor_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__motor_faults(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__joint_at_limit(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__joint_at_limit(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__joint_at_limit(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__joint_at_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__joint_at_limit(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__joint_at_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__joint_at_limit(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, arm_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, motion_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_modes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, motor_modes),  // bytes offset in struct
    NULL,  // default value
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__motor_modes,  // size() function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__motor_modes,  // get_const(index) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__motor_modes,  // get(index) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__motor_modes,  // fetch(index, &value) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__motor_modes,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, motor_faults),  // bytes offset in struct
    NULL,  // default value
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__motor_faults,  // size() function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__motor_faults,  // get_const(index) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__motor_faults,  // get(index) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__motor_faults,  // fetch(index, &value) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__motor_faults,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_at_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, joint_at_limit),  // bytes offset in struct
    NULL,  // default value
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__joint_at_limit,  // size() function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__joint_at_limit,  // get_const(index) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__joint_at_limit,  // get(index) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__joint_at_limit,  // fetch(index, &value) function pointer
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__joint_at_limit,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, gripper_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__ArmStatus, gripper_fault),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_members = {
  "panthera_interfaces__msg",  // message namespace
  "ArmStatus",  // message name
  9,  // number of fields
  sizeof(panthera_interfaces__msg__ArmStatus),
  false,  // has_any_key_member_
  panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array,  // message members
  panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle = {
  0,
  &panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_members,
  get_message_typesupport_handle_function,
  &panthera_interfaces__msg__ArmStatus__get_type_hash,
  &panthera_interfaces__msg__ArmStatus__get_type_description,
  &panthera_interfaces__msg__ArmStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panthera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, msg, ArmStatus)() {
  panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle.typesupport_identifier) {
    panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panthera_interfaces__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

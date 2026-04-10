// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panthera_interfaces:msg/EndPoseEuler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panthera_interfaces/msg/detail/end_pose_euler__rosidl_typesupport_introspection_c.h"
#include "panthera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panthera_interfaces/msg/detail/end_pose_euler__functions.h"
#include "panthera_interfaces/msg/detail/end_pose_euler__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panthera_interfaces__msg__EndPoseEuler__init(message_memory);
}

void panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_fini_function(void * message_memory)
{
  panthera_interfaces__msg__EndPoseEuler__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces__msg__EndPoseEuler, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_members = {
  "panthera_interfaces__msg",  // message namespace
  "EndPoseEuler",  // message name
  7,  // number of fields
  sizeof(panthera_interfaces__msg__EndPoseEuler),
  false,  // has_any_key_member_
  panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_member_array,  // message members
  panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_init_function,  // function to initialize message memory (memory has to be allocated)
  panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_type_support_handle = {
  0,
  &panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_members,
  get_message_typesupport_handle_function,
  &panthera_interfaces__msg__EndPoseEuler__get_type_hash,
  &panthera_interfaces__msg__EndPoseEuler__get_type_description,
  &panthera_interfaces__msg__EndPoseEuler__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panthera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, msg, EndPoseEuler)() {
  panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_type_support_handle.typesupport_identifier) {
    panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panthera_interfaces__msg__EndPoseEuler__rosidl_typesupport_introspection_c__EndPoseEuler_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

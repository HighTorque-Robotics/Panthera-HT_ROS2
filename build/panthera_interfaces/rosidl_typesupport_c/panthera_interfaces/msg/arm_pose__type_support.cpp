// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from panthera_interfaces:msg/ArmPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "panthera_interfaces/msg/detail/arm_pose__struct.h"
#include "panthera_interfaces/msg/detail/arm_pose__type_support.h"
#include "panthera_interfaces/msg/detail/arm_pose__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace panthera_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ArmPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArmPose_type_support_ids_t;

static const _ArmPose_type_support_ids_t _ArmPose_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArmPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArmPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArmPose_type_support_symbol_names_t _ArmPose_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, msg, ArmPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panthera_interfaces, msg, ArmPose)),
  }
};

typedef struct _ArmPose_type_support_data_t
{
  void * data[2];
} _ArmPose_type_support_data_t;

static _ArmPose_type_support_data_t _ArmPose_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArmPose_message_typesupport_map = {
  2,
  "panthera_interfaces",
  &_ArmPose_message_typesupport_ids.typesupport_identifier[0],
  &_ArmPose_message_typesupport_symbol_names.symbol_name[0],
  &_ArmPose_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArmPose_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArmPose_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &panthera_interfaces__msg__ArmPose__get_type_hash,
  &panthera_interfaces__msg__ArmPose__get_type_description,
  &panthera_interfaces__msg__ArmPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace panthera_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, panthera_interfaces, msg, ArmPose)() {
  return &::panthera_interfaces::msg::rosidl_typesupport_c::ArmPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from panthera_interfaces:msg/ArmPose.idl
// generated code does not contain a copyright notice

#include "panthera_interfaces/msg/detail/arm_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__msg__ArmPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x49, 0x52, 0x24, 0x23, 0xbd, 0xf9, 0x23,
      0x2c, 0x2f, 0xfc, 0xd9, 0x1b, 0xd0, 0xfe, 0x0d,
      0x36, 0x51, 0x57, 0xd2, 0x21, 0x1d, 0x84, 0xd9,
      0x2f, 0x33, 0xe1, 0xc8, 0x50, 0xc6, 0x30, 0x96,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char panthera_interfaces__msg__ArmPose__TYPE_NAME[] = "panthera_interfaces/msg/ArmPose";

// Define type names, field names, and default values
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__x[] = "x";
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__y[] = "y";
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__z[] = "z";
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__roll[] = "roll";
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__pitch[] = "pitch";
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__yaw[] = "yaw";
static char panthera_interfaces__msg__ArmPose__FIELD_NAME__cartesian_path[] = "cartesian_path";

static rosidl_runtime_c__type_description__Field panthera_interfaces__msg__ArmPose__FIELDS[] = {
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__ArmPose__FIELD_NAME__cartesian_path, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__msg__ArmPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__msg__ArmPose__TYPE_NAME, 31, 31},
      {panthera_interfaces__msg__ArmPose__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "float64 roll\n"
  "float64 pitch\n"
  "float64 yaw\n"
  "bool cartesian_path";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__msg__ArmPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__msg__ArmPose__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 89, 89},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__msg__ArmPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__msg__ArmPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

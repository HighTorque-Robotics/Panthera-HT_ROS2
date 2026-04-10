// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from panthera_interfaces:msg/PosCmd.idl
// generated code does not contain a copyright notice

#include "panthera_interfaces/msg/detail/pos_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__msg__PosCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0xd3, 0x54, 0x81, 0x93, 0x01, 0x71, 0x16,
      0x83, 0x8b, 0x1a, 0x90, 0x4e, 0x4e, 0x23, 0xd0,
      0xab, 0x50, 0x90, 0xa0, 0xa4, 0xae, 0x8a, 0xf3,
      0x5d, 0xe3, 0x7e, 0x45, 0xa4, 0xcb, 0x6f, 0xd3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char panthera_interfaces__msg__PosCmd__TYPE_NAME[] = "panthera_interfaces/msg/PosCmd";

// Define type names, field names, and default values
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__x[] = "x";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__y[] = "y";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__z[] = "z";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__roll[] = "roll";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__pitch[] = "pitch";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__yaw[] = "yaw";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__gripper[] = "gripper";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__mode1[] = "mode1";
static char panthera_interfaces__msg__PosCmd__FIELD_NAME__mode2[] = "mode2";

static rosidl_runtime_c__type_description__Field panthera_interfaces__msg__PosCmd__FIELDS[] = {
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__gripper, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__mode1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__msg__PosCmd__FIELD_NAME__mode2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__msg__PosCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__msg__PosCmd__TYPE_NAME, 30, 30},
      {panthera_interfaces__msg__PosCmd__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# PosCmd.msg - Combined end-effector pose + gripper command\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "float64 roll\n"
  "float64 pitch\n"
  "float64 yaw\n"
  "float64 gripper              # Gripper value (0.0=close, 1.0=fully open)\n"
  "uint8 mode1                  # 0=joint-space planning, 1=cartesian path\n"
  "uint8 mode2                  # Reserved for future use";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__msg__PosCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__msg__PosCmd__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 329, 329},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__msg__PosCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__msg__PosCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

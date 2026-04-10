// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from panthera_interfaces:srv/GripperSrv.idl
// generated code does not contain a copyright notice

#include "panthera_interfaces/srv/detail/gripper_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__GripperSrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x8f, 0x9c, 0xc5, 0xfb, 0xc7, 0xd4, 0xf8,
      0xc1, 0x3a, 0xf6, 0x81, 0x9b, 0x72, 0xc6, 0x40,
      0x7d, 0xf2, 0x71, 0x50, 0x6c, 0x79, 0xbd, 0xc8,
      0x61, 0x81, 0x52, 0x57, 0xc0, 0x36, 0x44, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__GripperSrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x98, 0x62, 0x88, 0x62, 0xe2, 0x0e, 0x9a,
      0x73, 0xfc, 0xe1, 0x6c, 0xe6, 0x16, 0xc4, 0xbe,
      0x64, 0x65, 0x79, 0x1f, 0x3b, 0xfe, 0xd8, 0xf8,
      0x89, 0x52, 0x49, 0xba, 0xd8, 0x8d, 0x7a, 0x89,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__GripperSrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0x84, 0x33, 0xd0, 0x54, 0x23, 0xbd, 0xd0,
      0x23, 0x69, 0x77, 0xcb, 0xb9, 0x13, 0x5d, 0xf9,
      0x3c, 0x73, 0xe6, 0x3e, 0x25, 0x4f, 0x57, 0xc6,
      0xa8, 0xad, 0xa9, 0x2f, 0xf9, 0x53, 0x5b, 0x70,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__GripperSrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x78, 0xfc, 0xb8, 0x93, 0x9c, 0xf4, 0x25,
      0xd0, 0xf5, 0xc1, 0x98, 0x5b, 0x5f, 0xe2, 0xca,
      0xb9, 0x6f, 0x1e, 0x78, 0x1c, 0x5b, 0x5c, 0x65,
      0x13, 0x0f, 0xda, 0xe0, 0x23, 0x07, 0x1d, 0x40,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char panthera_interfaces__srv__GripperSrv__TYPE_NAME[] = "panthera_interfaces/srv/GripperSrv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char panthera_interfaces__srv__GripperSrv_Event__TYPE_NAME[] = "panthera_interfaces/srv/GripperSrv_Event";
static char panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME[] = "panthera_interfaces/srv/GripperSrv_Request";
static char panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME[] = "panthera_interfaces/srv/GripperSrv_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char panthera_interfaces__srv__GripperSrv__FIELD_NAME__request_message[] = "request_message";
static char panthera_interfaces__srv__GripperSrv__FIELD_NAME__response_message[] = "response_message";
static char panthera_interfaces__srv__GripperSrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__GripperSrv__FIELDS[] = {
  {
    {panthera_interfaces__srv__GripperSrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {panthera_interfaces__srv__GripperSrv_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription panthera_interfaces__srv__GripperSrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__srv__GripperSrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__GripperSrv__TYPE_NAME, 34, 34},
      {panthera_interfaces__srv__GripperSrv__FIELDS, 3, 3},
    },
    {panthera_interfaces__srv__GripperSrv__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = panthera_interfaces__srv__GripperSrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = panthera_interfaces__srv__GripperSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = panthera_interfaces__srv__GripperSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__gripper_angle[] = "gripper_angle";
static char panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__gripper_effort[] = "gripper_effort";
static char panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__gripper_code[] = "gripper_code";
static char panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__set_zero[] = "set_zero";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__GripperSrv_Request__FIELDS[] = {
  {
    {panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__gripper_angle, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__gripper_effort, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__gripper_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Request__FIELD_NAME__set_zero, 8, 8},
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
panthera_interfaces__srv__GripperSrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME, 42, 42},
      {panthera_interfaces__srv__GripperSrv_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char panthera_interfaces__srv__GripperSrv_Response__FIELD_NAME__code[] = "code";
static char panthera_interfaces__srv__GripperSrv_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__GripperSrv_Response__FIELDS[] = {
  {
    {panthera_interfaces__srv__GripperSrv_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Response__FIELD_NAME__status, 6, 6},
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
panthera_interfaces__srv__GripperSrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME, 43, 43},
      {panthera_interfaces__srv__GripperSrv_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char panthera_interfaces__srv__GripperSrv_Event__FIELD_NAME__info[] = "info";
static char panthera_interfaces__srv__GripperSrv_Event__FIELD_NAME__request[] = "request";
static char panthera_interfaces__srv__GripperSrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__GripperSrv_Event__FIELDS[] = {
  {
    {panthera_interfaces__srv__GripperSrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription panthera_interfaces__srv__GripperSrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__srv__GripperSrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__GripperSrv_Event__TYPE_NAME, 40, 40},
      {panthera_interfaces__srv__GripperSrv_Event__FIELDS, 3, 3},
    },
    {panthera_interfaces__srv__GripperSrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = panthera_interfaces__srv__GripperSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = panthera_interfaces__srv__GripperSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Detailed gripper control\n"
  "float64 gripper_angle         # Target gripper position (meters, 0.0~0.04)\n"
  "float64 gripper_effort        # Max effort/torque\n"
  "uint8 gripper_code            # 0=position mode, 1=effort mode\n"
  "bool set_zero                 # If true, reset gripper zero position\n"
  "---\n"
  "int64 code                    # 0=success, non-zero=error code\n"
  "bool status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__GripperSrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__GripperSrv__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 363, 363},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__GripperSrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__GripperSrv_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__GripperSrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__GripperSrv_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__GripperSrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__GripperSrv_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__GripperSrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__GripperSrv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *panthera_interfaces__srv__GripperSrv_Event__get_individual_type_description_source(NULL);
    sources[3] = *panthera_interfaces__srv__GripperSrv_Request__get_individual_type_description_source(NULL);
    sources[4] = *panthera_interfaces__srv__GripperSrv_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__GripperSrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__GripperSrv_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__GripperSrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__GripperSrv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__GripperSrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__GripperSrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *panthera_interfaces__srv__GripperSrv_Request__get_individual_type_description_source(NULL);
    sources[3] = *panthera_interfaces__srv__GripperSrv_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from panthera_interfaces:srv/MoveToJoint.idl
// generated code does not contain a copyright notice

#include "panthera_interfaces/srv/detail/move_to_joint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__MoveToJoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0xee, 0xc5, 0xfe, 0x07, 0x55, 0x04, 0x76,
      0x20, 0x7e, 0x33, 0xdb, 0xdc, 0xc4, 0x13, 0x9c,
      0xca, 0xa3, 0x39, 0x13, 0x1c, 0x7b, 0x20, 0x91,
      0xbb, 0x61, 0xa0, 0x3c, 0x19, 0x4e, 0x3c, 0xf1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__MoveToJoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x96, 0x9b, 0xc5, 0x1d, 0xf2, 0x71, 0x49,
      0x6b, 0x36, 0xfa, 0x5e, 0x7f, 0x72, 0x6a, 0x8f,
      0x9e, 0xc8, 0x1c, 0x80, 0xf6, 0xe9, 0x51, 0xee,
      0x3a, 0xab, 0x54, 0x48, 0x54, 0x24, 0x7d, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__MoveToJoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xd8, 0x3b, 0x64, 0xf3, 0xdd, 0xe7, 0x76,
      0x62, 0xc5, 0x2b, 0x02, 0x7b, 0xf7, 0x12, 0xde,
      0x91, 0x4b, 0xbd, 0x4e, 0xdf, 0x5d, 0x80, 0x0f,
      0xc1, 0x47, 0x59, 0x42, 0x76, 0xf7, 0x4e, 0x62,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__srv__MoveToJoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0x19, 0x01, 0x47, 0xfc, 0xc7, 0x22, 0x63,
      0xcc, 0x3b, 0xc0, 0xdb, 0xf9, 0x47, 0xf5, 0x0a,
      0xd4, 0x45, 0x37, 0x9b, 0xde, 0xb1, 0xb9, 0xde,
      0x9d, 0x75, 0xc1, 0x2e, 0x93, 0x2e, 0x3c, 0x48,
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

static char panthera_interfaces__srv__MoveToJoint__TYPE_NAME[] = "panthera_interfaces/srv/MoveToJoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char panthera_interfaces__srv__MoveToJoint_Event__TYPE_NAME[] = "panthera_interfaces/srv/MoveToJoint_Event";
static char panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME[] = "panthera_interfaces/srv/MoveToJoint_Request";
static char panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME[] = "panthera_interfaces/srv/MoveToJoint_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char panthera_interfaces__srv__MoveToJoint__FIELD_NAME__request_message[] = "request_message";
static char panthera_interfaces__srv__MoveToJoint__FIELD_NAME__response_message[] = "response_message";
static char panthera_interfaces__srv__MoveToJoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__MoveToJoint__FIELDS[] = {
  {
    {panthera_interfaces__srv__MoveToJoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {panthera_interfaces__srv__MoveToJoint_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription panthera_interfaces__srv__MoveToJoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__srv__MoveToJoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__MoveToJoint__TYPE_NAME, 35, 35},
      {panthera_interfaces__srv__MoveToJoint__FIELDS, 3, 3},
    },
    {panthera_interfaces__srv__MoveToJoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = panthera_interfaces__srv__MoveToJoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = panthera_interfaces__srv__MoveToJoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = panthera_interfaces__srv__MoveToJoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char panthera_interfaces__srv__MoveToJoint_Request__FIELD_NAME__joint_angles[] = "joint_angles";
static char panthera_interfaces__srv__MoveToJoint_Request__FIELD_NAME__velocity_scaling[] = "velocity_scaling";
static char panthera_interfaces__srv__MoveToJoint_Request__DEFAULT_VALUE__velocity_scaling[] = "1.0";
static char panthera_interfaces__srv__MoveToJoint_Request__FIELD_NAME__acceleration_scaling[] = "acceleration_scaling";
static char panthera_interfaces__srv__MoveToJoint_Request__DEFAULT_VALUE__acceleration_scaling[] = "1.0";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__MoveToJoint_Request__FIELDS[] = {
  {
    {panthera_interfaces__srv__MoveToJoint_Request__FIELD_NAME__joint_angles, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Request__FIELD_NAME__velocity_scaling, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {panthera_interfaces__srv__MoveToJoint_Request__DEFAULT_VALUE__velocity_scaling, 3, 3},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Request__FIELD_NAME__acceleration_scaling, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {panthera_interfaces__srv__MoveToJoint_Request__DEFAULT_VALUE__acceleration_scaling, 3, 3},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__srv__MoveToJoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME, 43, 43},
      {panthera_interfaces__srv__MoveToJoint_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char panthera_interfaces__srv__MoveToJoint_Response__FIELD_NAME__success[] = "success";
static char panthera_interfaces__srv__MoveToJoint_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__MoveToJoint_Response__FIELDS[] = {
  {
    {panthera_interfaces__srv__MoveToJoint_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__srv__MoveToJoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME, 44, 44},
      {panthera_interfaces__srv__MoveToJoint_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char panthera_interfaces__srv__MoveToJoint_Event__FIELD_NAME__info[] = "info";
static char panthera_interfaces__srv__MoveToJoint_Event__FIELD_NAME__request[] = "request";
static char panthera_interfaces__srv__MoveToJoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field panthera_interfaces__srv__MoveToJoint_Event__FIELDS[] = {
  {
    {panthera_interfaces__srv__MoveToJoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription panthera_interfaces__srv__MoveToJoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__srv__MoveToJoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {panthera_interfaces__srv__MoveToJoint_Event__TYPE_NAME, 41, 41},
      {panthera_interfaces__srv__MoveToJoint_Event__FIELDS, 3, 3},
    },
    {panthera_interfaces__srv__MoveToJoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = panthera_interfaces__srv__MoveToJoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = panthera_interfaces__srv__MoveToJoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request: 6 joint angles in radians\n"
  "float64[6] joint_angles\n"
  "# Max velocity scaling factor (0.0~1.0)\n"
  "float64 velocity_scaling 1.0\n"
  "# Max acceleration scaling factor (0.0~1.0)\n"
  "float64 acceleration_scaling 1.0\n"
  "---\n"
  "# Response\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__MoveToJoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__MoveToJoint__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 250, 250},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__MoveToJoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__MoveToJoint_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__MoveToJoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__MoveToJoint_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__srv__MoveToJoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {panthera_interfaces__srv__MoveToJoint_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__MoveToJoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__MoveToJoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *panthera_interfaces__srv__MoveToJoint_Event__get_individual_type_description_source(NULL);
    sources[3] = *panthera_interfaces__srv__MoveToJoint_Request__get_individual_type_description_source(NULL);
    sources[4] = *panthera_interfaces__srv__MoveToJoint_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__MoveToJoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__MoveToJoint_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__MoveToJoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__MoveToJoint_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__srv__MoveToJoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *panthera_interfaces__srv__MoveToJoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *panthera_interfaces__srv__MoveToJoint_Request__get_individual_type_description_source(NULL);
    sources[3] = *panthera_interfaces__srv__MoveToJoint_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

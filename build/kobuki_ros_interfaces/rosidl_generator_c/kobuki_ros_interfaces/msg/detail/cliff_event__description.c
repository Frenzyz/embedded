// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/CliffEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/cliff_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__CliffEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x4c, 0xab, 0x1e, 0x36, 0x8d, 0x1e, 0xca,
      0x99, 0xad, 0x1b, 0xec, 0x3b, 0x4e, 0xec, 0x84,
      0x9a, 0xe5, 0x85, 0x43, 0x37, 0x0f, 0xc3, 0xb9,
      0x7a, 0x66, 0x4c, 0x57, 0xca, 0x85, 0xbd, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__CliffEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/CliffEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__CliffEvent__FIELD_NAME__sensor[] = "sensor";
static char kobuki_ros_interfaces__msg__CliffEvent__FIELD_NAME__state[] = "state";
static char kobuki_ros_interfaces__msg__CliffEvent__FIELD_NAME__bottom[] = "bottom";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__CliffEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__CliffEvent__FIELD_NAME__sensor, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__CliffEvent__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__CliffEvent__FIELD_NAME__bottom, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__CliffEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__CliffEvent__TYPE_NAME, 36, 36},
      {kobuki_ros_interfaces__msg__CliffEvent__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Provides a cliff sensor event.\n"
  "# This message is generated whenever a particular cliff sensor signals that the\n"
  "# robot approaches or moves away from a cliff.\n"
  "# Note that, despite cliff field on SensorState messages, state field is not a\n"
  "# bitmask, but the new state of a single sensor.\n"
  "\n"
  "# cliff sensor\n"
  "uint8 LEFT   = 0\n"
  "uint8 CENTER = 1\n"
  "uint8 RIGHT  = 2\n"
  "\n"
  "# cliff sensor state\n"
  "uint8 FLOOR = 0\n"
  "uint8 CLIFF = 1\n"
  "\n"
  "uint8 sensor\n"
  "uint8 state\n"
  "\n"
  "# distance to floor when cliff was detected\n"
  "uint16 bottom";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__CliffEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__CliffEvent__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 493, 493},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__CliffEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__CliffEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

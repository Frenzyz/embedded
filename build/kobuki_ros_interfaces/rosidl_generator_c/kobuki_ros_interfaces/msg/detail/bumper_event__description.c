// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/BumperEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/bumper_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__BumperEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x5b, 0x8a, 0xbf, 0xc4, 0x14, 0x95, 0xa1,
      0x4a, 0x9f, 0xc1, 0xd0, 0x94, 0x63, 0x35, 0x75,
      0xda, 0xf9, 0x7b, 0x42, 0x72, 0xde, 0x10, 0x7e,
      0xd5, 0xfa, 0x58, 0xcb, 0x46, 0x22, 0x4b, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__BumperEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/BumperEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__BumperEvent__FIELD_NAME__bumper[] = "bumper";
static char kobuki_ros_interfaces__msg__BumperEvent__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__BumperEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__BumperEvent__FIELD_NAME__bumper, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__BumperEvent__FIELD_NAME__state, 5, 5},
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
kobuki_ros_interfaces__msg__BumperEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__BumperEvent__TYPE_NAME, 37, 37},
      {kobuki_ros_interfaces__msg__BumperEvent__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Provides a bumper event.\n"
  "# This message is generated whenever a particular bumper is pressed or released.\n"
  "# Note that, despite bumper field on SensorState messages, state field is not a\n"
  "# bitmask, but the new state of a single sensor.\n"
  "\n"
  "# bumper\n"
  "uint8 LEFT   = 0\n"
  "uint8 CENTER = 1\n"
  "uint8 RIGHT  = 2\n"
  "\n"
  "# state\n"
  "uint8 RELEASED = 0\n"
  "uint8 PRESSED  = 1\n"
  "\n"
  "uint8 bumper\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__BumperEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__BumperEvent__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 371, 371},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__BumperEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__BumperEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

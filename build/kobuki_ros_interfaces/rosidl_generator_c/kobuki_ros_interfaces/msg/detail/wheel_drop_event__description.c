// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/WheelDropEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/wheel_drop_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__WheelDropEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x67, 0x2e, 0x80, 0x4b, 0xcf, 0x31, 0x6e,
      0x72, 0xd3, 0xf1, 0x60, 0xaa, 0xc5, 0x39, 0x14,
      0x94, 0x6a, 0x49, 0x4f, 0x69, 0xac, 0x4c, 0x48,
      0x87, 0x2c, 0x67, 0xd5, 0x66, 0xf7, 0x2e, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__WheelDropEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/WheelDropEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__WheelDropEvent__FIELD_NAME__wheel[] = "wheel";
static char kobuki_ros_interfaces__msg__WheelDropEvent__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__WheelDropEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__WheelDropEvent__FIELD_NAME__wheel, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__WheelDropEvent__FIELD_NAME__state, 5, 5},
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
kobuki_ros_interfaces__msg__WheelDropEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__WheelDropEvent__TYPE_NAME, 40, 40},
      {kobuki_ros_interfaces__msg__WheelDropEvent__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Provides a wheel drop event.\n"
  "# This message is generated whenever one of the wheels is dropped (robot fell\n"
  "# or was raised) or raised (normal condition).\n"
  "# Note that, despite wheel_drop field on SensorState messages, state field is\n"
  "# not a bitmask, but the new state of a single sensor.\n"
  "\n"
  "# wheel\n"
  "uint8 LEFT  = 0\n"
  "uint8 RIGHT = 1\n"
  "\n"
  "# state\n"
  "uint8 RAISED  = 0\n"
  "uint8 DROPPED = 1\n"
  "\n"
  "uint8 wheel\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__WheelDropEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__WheelDropEvent__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 400, 400},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__WheelDropEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__WheelDropEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

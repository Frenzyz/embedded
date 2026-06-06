// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/DigitalInputEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/digital_input_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__DigitalInputEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x0a, 0x62, 0x56, 0x58, 0x10, 0xbd, 0x80,
      0x54, 0x22, 0xb6, 0xe2, 0xf5, 0x7b, 0xf0, 0xa2,
      0x22, 0xc6, 0x16, 0x44, 0x1a, 0xcb, 0xcb, 0x1b,
      0x9b, 0x8e, 0xcc, 0xdd, 0x23, 0xd5, 0xe1, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__DigitalInputEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/DigitalInputEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__DigitalInputEvent__FIELD_NAME__values[] = "values";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__DigitalInputEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__DigitalInputEvent__FIELD_NAME__values, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__DigitalInputEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__DigitalInputEvent__TYPE_NAME, 43, 43},
      {kobuki_ros_interfaces__msg__DigitalInputEvent__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is generated whenever the value of one or more digital input pins changes.\n"
  "\n"
  "# Array of values; indices represent pins 0-3 respectively.\n"
  "bool[4] values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__DigitalInputEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__DigitalInputEvent__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 166, 166},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__DigitalInputEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__DigitalInputEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/button_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__ButtonEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x26, 0x41, 0x3d, 0xe9, 0xf2, 0x65, 0x34,
      0x35, 0xb6, 0xd3, 0x36, 0x15, 0x25, 0x0f, 0xfa,
      0x38, 0xaa, 0x36, 0x9f, 0x96, 0xba, 0xa3, 0x29,
      0x5d, 0x6a, 0x22, 0x39, 0x1a, 0x5b, 0xf0, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__ButtonEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/ButtonEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__ButtonEvent__FIELD_NAME__button[] = "button";
static char kobuki_ros_interfaces__msg__ButtonEvent__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__ButtonEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__ButtonEvent__FIELD_NAME__button, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__ButtonEvent__FIELD_NAME__state, 5, 5},
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
kobuki_ros_interfaces__msg__ButtonEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__ButtonEvent__TYPE_NAME, 37, 37},
      {kobuki_ros_interfaces__msg__ButtonEvent__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Provides a button event.\n"
  "# This message is generated whenever a particular button is pressed or released.\n"
  "# Note that, despite buttons field on SensorState messages, state field is not a\n"
  "# bitmask, but the new state of a single button.\n"
  "\n"
  "uint8 BUTTON0 = 0\n"
  "uint8 BUTTON1 = 1\n"
  "uint8 BUTTON2 = 2\n"
  "\n"
  "uint8 RELEASED = 0\n"
  "uint8 PRESSED  = 1\n"
  "\n"
  "uint8 button\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__ButtonEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__ButtonEvent__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 358, 358},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__ButtonEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__ButtonEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

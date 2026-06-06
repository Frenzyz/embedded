// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/KeyboardInput.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/keyboard_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__KeyboardInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0x79, 0x75, 0x9e, 0x68, 0xca, 0x76, 0xfd,
      0x44, 0x50, 0xf2, 0x59, 0x5c, 0x31, 0x1f, 0xdb,
      0x69, 0x24, 0xd8, 0xe4, 0x32, 0x02, 0x80, 0x9f,
      0xe1, 0x8e, 0x7b, 0x4e, 0x5e, 0xcc, 0x26, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__KeyboardInput__TYPE_NAME[] = "kobuki_ros_interfaces/msg/KeyboardInput";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__KeyboardInput__FIELD_NAME__pressed_key[] = "pressed_key";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__KeyboardInput__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__KeyboardInput__FIELD_NAME__pressed_key, 11, 11},
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
kobuki_ros_interfaces__msg__KeyboardInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__KeyboardInput__TYPE_NAME, 39, 39},
      {kobuki_ros_interfaces__msg__KeyboardInput__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# KEYBOARD INPUT\n"
  "# \n"
  "# Keycodes to be transferred for remote teleops.\n"
  "\n"
  "uint8  KEYCODE_RIGHT    = 67     # 0x43\n"
  "uint8  KEYCODE_LEFT     = 68     # 0x44\n"
  "uint8  KEYCODE_UP       = 65     # 0x41\n"
  "uint8  KEYCODE_DOWN     = 66     # 0x42\n"
  "uint8  KEYCODE_SPACE    = 32     # 0x20\n"
  "uint8  KEYCODE_ENABLE   = 101    # 0x65, 'e'\n"
  "uint8  KEYCODE_DISABLE  = 100    # 0x64, 'd'\n"
  "\n"
  "uint8 pressed_key";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__KeyboardInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__KeyboardInput__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 379, 379},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__KeyboardInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__KeyboardInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

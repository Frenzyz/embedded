// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/Sound.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/sound__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__Sound__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xf6, 0x4d, 0x09, 0x1f, 0xe6, 0x54, 0xfd,
      0xaa, 0x2b, 0xac, 0x20, 0xad, 0x10, 0x42, 0xe0,
      0x4a, 0x57, 0x73, 0xcf, 0x27, 0x01, 0x1a, 0xe5,
      0x6e, 0x03, 0xc0, 0x04, 0x36, 0xab, 0xe5, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__Sound__TYPE_NAME[] = "kobuki_ros_interfaces/msg/Sound";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__Sound__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__Sound__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__Sound__FIELD_NAME__value, 5, 5},
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
kobuki_ros_interfaces__msg__Sound__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__Sound__TYPE_NAME, 31, 31},
      {kobuki_ros_interfaces__msg__Sound__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Sends a command for playing sounds.\n"
  "# The available sound sequences:\n"
  "# 0 - turn on\n"
  "# 1 - turn off\n"
  "# 2 - recharge start\n"
  "# 3 - press button,\n"
  "# 4 - error sound\n"
  "# 5 - start cleaning\n"
  "# 6 - cleaning end\n"
  "\n"
  "uint8 ON            = 0\n"
  "uint8 OFF           = 1\n"
  "uint8 RECHARGE      = 2\n"
  "uint8 BUTTON        = 3\n"
  "uint8 ERROR         = 4\n"
  "uint8 CLEANINGSTART = 5\n"
  "uint8 CLEANINGEND   = 6\n"
  "\n"
  "uint8 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__Sound__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__Sound__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 380, 380},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__Sound__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__Sound__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

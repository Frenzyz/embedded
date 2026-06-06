// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/Led.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/led__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__Led__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x4c, 0xcb, 0xa0, 0x76, 0x30, 0xb7, 0xd5,
      0xf6, 0xc7, 0x51, 0x92, 0x03, 0x47, 0x79, 0x0d,
      0x78, 0xd9, 0xec, 0x28, 0x9a, 0xcb, 0x3e, 0x26,
      0x88, 0xd8, 0xe2, 0x30, 0x64, 0xe4, 0xb9, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__Led__TYPE_NAME[] = "kobuki_ros_interfaces/msg/Led";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__Led__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__Led__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__Led__FIELD_NAME__value, 5, 5},
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
kobuki_ros_interfaces__msg__Led__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__Led__TYPE_NAME, 29, 29},
      {kobuki_ros_interfaces__msg__Led__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Sends a command for controlling the a LED.\n"
  "# \n"
  "# Typically the first LED is always reserved to denote\n"
  "# the state - the remainder will be controllable. \n"
  "\n"
  "uint8 BLACK   = 0\n"
  "uint8 GREEN   = 1\n"
  "uint8 ORANGE  = 2\n"
  "uint8 RED     = 3\n"
  "\n"
  "# For kobuki there are only two controllable LED's.\n"
  "uint8 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__Led__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__Led__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 292, 292},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__Led__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__Led__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

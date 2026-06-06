// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/digital_output__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__DigitalOutput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0xd4, 0x9b, 0x35, 0xb7, 0x59, 0xe4, 0xdc,
      0xee, 0x35, 0xe3, 0xd7, 0xff, 0xe2, 0x6f, 0x38,
      0x46, 0x89, 0x5d, 0x9e, 0x31, 0x5c, 0x2d, 0xfb,
      0x90, 0x82, 0xc5, 0x9e, 0x3b, 0x36, 0x66, 0x48,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__DigitalOutput__TYPE_NAME[] = "kobuki_ros_interfaces/msg/DigitalOutput";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__DigitalOutput__FIELD_NAME__values[] = "values";
static char kobuki_ros_interfaces__msg__DigitalOutput__FIELD_NAME__mask[] = "mask";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__DigitalOutput__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__DigitalOutput__FIELD_NAME__values, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__DigitalOutput__FIELD_NAME__mask, 4, 4},
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
kobuki_ros_interfaces__msg__DigitalOutput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__DigitalOutput__TYPE_NAME, 39, 39},
      {kobuki_ros_interfaces__msg__DigitalOutput__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Digital output - only four pins. \n"
  "\n"
  "# Array of values indices represent pins 0-3 respectively.\n"
  "bool[4] values\n"
  "\n"
  "# Set indices to true to set a pin, false to ignore.\n"
  "bool[4] mask";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__DigitalOutput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__DigitalOutput__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 178, 178},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__DigitalOutput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__DigitalOutput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/MotorPower.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/motor_power__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__MotorPower__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x6c, 0x1c, 0xf9, 0x4e, 0x9f, 0xa7, 0xec,
      0x4e, 0x49, 0xa5, 0x2d, 0x0a, 0x80, 0x64, 0xa1,
      0x64, 0x6f, 0x48, 0xf5, 0x01, 0xb2, 0xd1, 0x32,
      0x4b, 0x01, 0x25, 0x0b, 0xf2, 0xb6, 0x80, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__MotorPower__TYPE_NAME[] = "kobuki_ros_interfaces/msg/MotorPower";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__MotorPower__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__MotorPower__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__MotorPower__FIELD_NAME__state, 5, 5},
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
kobuki_ros_interfaces__msg__MotorPower__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__MotorPower__TYPE_NAME, 36, 36},
      {kobuki_ros_interfaces__msg__MotorPower__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Turn on/off Kobuki's motors\n"
  "\n"
  "# State\n"
  "uint8 OFF = 0\n"
  "uint8 ON  = 1\n"
  "\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__MotorPower__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__MotorPower__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__MotorPower__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__MotorPower__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

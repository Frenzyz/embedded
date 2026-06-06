// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/ExternalPower.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/external_power__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__ExternalPower__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x26, 0xbf, 0xd0, 0x6b, 0xc8, 0xf9, 0x77,
      0x75, 0x01, 0x2c, 0xec, 0x51, 0xae, 0x0c, 0xa2,
      0xab, 0xb1, 0x72, 0xd9, 0x3b, 0x71, 0x2a, 0x33,
      0x7f, 0x38, 0xdc, 0x20, 0x24, 0x7f, 0x80, 0xcc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__ExternalPower__TYPE_NAME[] = "kobuki_ros_interfaces/msg/ExternalPower";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__ExternalPower__FIELD_NAME__source[] = "source";
static char kobuki_ros_interfaces__msg__ExternalPower__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__ExternalPower__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__ExternalPower__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__ExternalPower__FIELD_NAME__state, 5, 5},
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
kobuki_ros_interfaces__msg__ExternalPower__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__ExternalPower__TYPE_NAME, 39, 39},
      {kobuki_ros_interfaces__msg__ExternalPower__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Turn on/off Kobuki's external power sources\n"
  "\n"
  "# Power sources\n"
  "uint8 PWR_3_3V1A  = 0 # DB25 connector only\n"
  "uint8 PWR_5V1A    = 1 # DB25 connector and Micro Molex connector\n"
  "uint8 PWR_12V5A   = 2 # Micro Molex connector only\n"
  "uint8 PWR_12V1_5A = 3 # Micro Molex connector only\n"
  "\n"
  "# State\n"
  "uint8 OFF = 0\n"
  "uint8 ON  = 1\n"
  "\n"
  "uint8 source\n"
  "\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__ExternalPower__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__ExternalPower__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 337, 337},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__ExternalPower__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__ExternalPower__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

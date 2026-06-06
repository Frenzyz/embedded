// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/version_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__VersionInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xcd, 0x8d, 0x53, 0xfd, 0x4b, 0x7e, 0xfa,
      0x69, 0xe0, 0x00, 0x4b, 0x04, 0xac, 0x0a, 0xbd,
      0x97, 0xf9, 0x2b, 0xa7, 0xab, 0xd9, 0x28, 0xfa,
      0x8e, 0xd3, 0x54, 0x82, 0x23, 0x80, 0xcc, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__VersionInfo__TYPE_NAME[] = "kobuki_ros_interfaces/msg/VersionInfo";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__hardware[] = "hardware";
static char kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__firmware[] = "firmware";
static char kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__software[] = "software";
static char kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__udid[] = "udid";
static char kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__features[] = "features";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__VersionInfo__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__hardware, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__firmware, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__software, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__udid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__VersionInfo__FIELD_NAME__features, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__VersionInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__VersionInfo__TYPE_NAME, 37, 37},
      {kobuki_ros_interfaces__msg__VersionInfo__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Contains unique device id, version info and available features for the kobuki platform.\n"
  "# Useful for compatibility checking and introspection\n"
  "\n"
  "string hardware   # <major>.<minor>.<patch>\n"
  "string firmware   # <major>.<minor>.<patch>\n"
  "string software   # Still to decide how it will look\n"
  "uint32[] udid\n"
  "\n"
  "# Bitmask that specifies the available features in the firmware and/or driver\n"
  "uint64 features\n"
  "\n"
  "# The following represent the bit fields corresponding to bits in the features value\n"
  "\n"
  "# Provided firmware kobuki_firmware_1.1.1.hex\n"
  "uint64 SMOOTH_MOVE_START    = 0000000000000001\n"
  "uint64 GYROSCOPE_3D_DATA    = 0000000000000002";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__VersionInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__VersionInfo__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 622, 622},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__VersionInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__VersionInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

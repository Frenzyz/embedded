// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/controller_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__ControllerInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0xf0, 0x90, 0x80, 0x33, 0x86, 0xbf, 0x2a,
      0x97, 0xc5, 0x73, 0x25, 0x0b, 0xb7, 0x7b, 0xc3,
      0xe4, 0x0c, 0xd7, 0x41, 0x26, 0xcc, 0x22, 0x52,
      0x16, 0xb2, 0x81, 0xe3, 0x7c, 0xcc, 0xc7, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__ControllerInfo__TYPE_NAME[] = "kobuki_ros_interfaces/msg/ControllerInfo";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__type[] = "type";
static char kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__p_gain[] = "p_gain";
static char kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__i_gain[] = "i_gain";
static char kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__d_gain[] = "d_gain";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__ControllerInfo__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__p_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__i_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__ControllerInfo__FIELD_NAME__d_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__ControllerInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__ControllerInfo__TYPE_NAME, 40, 40},
      {kobuki_ros_interfaces__msg__ControllerInfo__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Controller info message, contains PID parameters\n"
  "\n"
  "uint8 DEFAULT   =  0\n"
  "uint8 USER_CONFIGURED =  1\n"
  "\n"
  "uint8 type\n"
  "float64 p_gain #should be positive\n"
  "float64 i_gain #should be positive\n"
  "float64 d_gain #should be positive";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__ControllerInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__ControllerInfo__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 217, 217},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__ControllerInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__ControllerInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

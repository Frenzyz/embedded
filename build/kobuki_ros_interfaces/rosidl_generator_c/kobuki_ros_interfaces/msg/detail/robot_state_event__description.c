// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/RobotStateEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/robot_state_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__RobotStateEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xbe, 0xf4, 0x6b, 0xce, 0xfd, 0x15, 0x23,
      0xbb, 0x33, 0x17, 0xa5, 0x02, 0x35, 0x6a, 0x1f,
      0x17, 0x07, 0x20, 0x9f, 0x73, 0xa1, 0xf6, 0x0e,
      0x0c, 0x64, 0x53, 0xf9, 0x0a, 0x0f, 0x3d, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__RobotStateEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/RobotStateEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__RobotStateEvent__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__RobotStateEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__RobotStateEvent__FIELD_NAME__state, 5, 5},
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
kobuki_ros_interfaces__msg__RobotStateEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__RobotStateEvent__TYPE_NAME, 41, 41},
      {kobuki_ros_interfaces__msg__RobotStateEvent__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Provides a robot state event\n"
  "# This message is generated whenever the robot gets online/offline\n"
  "\n"
  "uint8 ONLINE  = 1\n"
  "uint8 OFFLINE = 0\n"
  "\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__RobotStateEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__RobotStateEvent__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__RobotStateEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__RobotStateEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

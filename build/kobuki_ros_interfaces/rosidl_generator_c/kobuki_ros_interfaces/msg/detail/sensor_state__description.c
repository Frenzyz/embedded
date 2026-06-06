// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/sensor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__SensorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x08, 0xb5, 0x34, 0x60, 0xc5, 0x28, 0x2c,
      0x86, 0x5a, 0xeb, 0xb3, 0x0a, 0x32, 0xa7, 0x52,
      0xef, 0xa5, 0x9c, 0x33, 0xbf, 0xd5, 0x5a, 0xef,
      0x79, 0x71, 0x92, 0xa5, 0x8f, 0xab, 0xfb, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char kobuki_ros_interfaces__msg__SensorState__TYPE_NAME[] = "kobuki_ros_interfaces/msg/SensorState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__header[] = "header";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__time_stamp[] = "time_stamp";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__bumper[] = "bumper";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__wheel_drop[] = "wheel_drop";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__cliff[] = "cliff";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__left_encoder[] = "left_encoder";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__right_encoder[] = "right_encoder";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__left_pwm[] = "left_pwm";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__right_pwm[] = "right_pwm";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__buttons[] = "buttons";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__charger[] = "charger";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__battery[] = "battery";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__bottom[] = "bottom";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__current[] = "current";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__over_current[] = "over_current";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__digital_input[] = "digital_input";
static char kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__analog_input[] = "analog_input";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__SensorState__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__time_stamp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__bumper, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__wheel_drop, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__cliff, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__left_encoder, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__right_encoder, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__left_pwm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__right_pwm, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__buttons, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__charger, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__bottom, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__over_current, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__digital_input, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kobuki_ros_interfaces__msg__SensorState__FIELD_NAME__analog_input, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kobuki_ros_interfaces__msg__SensorState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__SensorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__SensorState__TYPE_NAME, 37, 37},
      {kobuki_ros_interfaces__msg__SensorState__FIELDS, 17, 17},
    },
    {kobuki_ros_interfaces__msg__SensorState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Kobuki Sensor Data Messages\n"
  "#\n"
  "# For more direct simple interactions (buttons, leds, gyro, motor velocity\n"
  "# etc) use the other topics. This provides detailed information about the\n"
  "# entire state package that is transmitted at 50Hz from the robot.\n"
  "#\n"
  "\n"
  "\n"
  "###### CONSTANTS ######\n"
  "# Bumper states (states are combined, when multiple bumpers are pressed)\n"
  "uint8 BUMPER_RIGHT  = 1\n"
  "uint8 BUMPER_CENTRE = 2\n"
  "uint8 BUMPER_LEFT   = 4\n"
  "\n"
  "# Wheel drop sensor states (states are combined, when both wheel drop sensors are triggered)\n"
  "uint8 WHEEL_DROP_RIGHT = 1\n"
  "uint8 WHEEL_DROP_LEFT  = 2\n"
  "\n"
  "# Cliff sensor states (states are combined, when multiple cliff sensors are triggered)\n"
  "uint8 CLIFF_RIGHT  = 1\n"
  "uint8 CLIFF_CENTRE = 2\n"
  "uint8 CLIFF_LEFT   = 4\n"
  "\n"
  "# Button states (only one button can be triggered at a time)\n"
  "uint8 BUTTON0 = 1\n"
  "uint8 BUTTON1 = 2\n"
  "uint8 BUTTON2 = 4\n"
  "\n"
  "# Charger state is a combination of charging device (adapter, docking station)\n"
  "# and state (charging, charged, discharging):\n"
  "uint8 DISCHARGING      = 0\n"
  "uint8 DOCKING_CHARGED  = 2\n"
  "uint8 DOCKING_CHARGING = 6\n"
  "uint8 ADAPTER_CHARGED  = 18\n"
  "uint8 ADAPTER_CHARGING = 22\n"
  "\n"
  "# Over current states\n"
  "uint8 OVER_CURRENT_LEFT_WHEEL  = 1\n"
  "uint8 OVER_CURRENT_RIGHT_WHEEL = 2\n"
  "uint8 OVER_CURRENT_BOTH_WHEELS = 3\n"
  "\n"
  "# Digital input states (states are combined, when multiple inputs are set at the same time)\n"
  "# When connecting Yujin's test board, it acts as pull-up what inverts the behaviour:\n"
  "# No input: 79, all inputs set (e.g. buttons pressed): 64\n"
  "uint8 DIGITAL_INPUT0 = 1\n"
  "uint8 DIGITAL_INPUT1 = 2\n"
  "uint8 DIGITAL_INPUT2 = 4\n"
  "uint8 DIGITAL_INPUT3 = 8\n"
  "uint8 DB25_TEST_BOARD_CONNECTED = 64\n"
  "\n"
  "###### MESSAGE ######\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "###################\n"
  "# Core Packet\n"
  "###################\n"
  "uint16 time_stamp      # milliseconds starting when turning on Kobuki (max. 65536, then starts from 0 again)\n"
  "uint8  bumper          # see bumper states\n"
  "uint8  wheel_drop      # see wheel drop sensor states\n"
  "uint8  cliff           # see cliff sensor states\n"
  "uint16 left_encoder    # accumulated ticks left wheel starting with turning on Kobuki (max. 65535)\n"
  "uint16 right_encoder   # accumulated ticks right wheel starting with turning on Kobuki (max. 65535)\n"
  "int8   left_pwm        # % of applied maximum voltage left wheel: -100 (max. voltage backward) to +100 (max. voltage forward)\n"
  "int8   right_pwm       # % of applied maximum voltage right wheel: -100 (max. voltage backward) to +100 (max. voltage forward)\n"
  "uint8  buttons         # see button states\n"
  "uint8  charger         # see charger states\n"
  "uint8  battery         # battery voltage in 0.1V (ex. 16.1V -> 161)\n"
  "\n"
  "###################\n"
  "# Cliff Packet\n"
  "###################\n"
  "uint16[] bottom        # ADC output of the right, centre, left cliff PSD sensor (0 - 4095, distance measure is non-linear)\n"
  "\n"
  "###################\n"
  "# Current Packet\n"
  "###################\n"
  "uint8[] current        # motor current for the left and right motor in 10mA (ex. 12 -> 120mA)\n"
  "uint8   over_current   # see over current states\n"
  "\n"
  "###################\n"
  "# Input Packet\n"
  "###################\n"
  "uint16   digital_input # see digital input states; will show garbage when nothing is connected\n"
  "uint16[] analog_input  # ADC values for the 4 analog inputs; 0 - 4095: 0.0 - 3.3V; will show garbage when nothing is connected";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__SensorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__SensorState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3228, 3228},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__SensorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__SensorState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

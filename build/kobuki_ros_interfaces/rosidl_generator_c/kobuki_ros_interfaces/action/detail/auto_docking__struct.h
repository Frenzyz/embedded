// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:action/AutoDocking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kobuki_ros_interfaces/action/auto_docking.h"


#ifndef KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_Goal
{
  uint8_t structure_needs_at_least_one_member;
} kobuki_ros_interfaces__action__AutoDocking_Goal;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_Goal.
typedef struct kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_Result
{
  rosidl_runtime_c__String text;
} kobuki_ros_interfaces__action__AutoDocking_Result;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_Result.
typedef struct kobuki_ros_interfaces__action__AutoDocking_Result__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'text'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_Feedback
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String text;
} kobuki_ros_interfaces__action__AutoDocking_Feedback;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_Feedback.
typedef struct kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  kobuki_ros_interfaces__action__AutoDocking_Goal goal;
} kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request.
typedef struct kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response.
typedef struct kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence request;
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence response;
} kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event.
typedef struct kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} kobuki_ros_interfaces__action__AutoDocking_GetResult_Request;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_GetResult_Request.
typedef struct kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_GetResult_Response
{
  int8_t status;
  kobuki_ros_interfaces__action__AutoDocking_Result result;
} kobuki_ros_interfaces__action__AutoDocking_GetResult_Response;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_GetResult_Response.
typedef struct kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence request;
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence response;
} kobuki_ros_interfaces__action__AutoDocking_GetResult_Event;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_GetResult_Event.
typedef struct kobuki_ros_interfaces__action__AutoDocking_GetResult_Event__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"

/// Struct defined in action/AutoDocking in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  kobuki_ros_interfaces__action__AutoDocking_Feedback feedback;
} kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage;

// Struct for a sequence of kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage.
typedef struct kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence
{
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__STRUCT_H_

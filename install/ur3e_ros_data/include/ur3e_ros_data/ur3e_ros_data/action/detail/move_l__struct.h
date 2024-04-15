// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur3e_ros_data:action/MoveL.idl
// generated code does not contain a copyright notice

#ifndef UR3E_ROS_DATA__ACTION__DETAIL__MOVE_L__STRUCT_H_
#define UR3E_ROS_DATA__ACTION__DETAIL__MOVE_L__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_Goal
{
  double movex;
  double movey;
  double movez;
  double speed;
} ur3e_ros_data__action__MoveL_Goal;

// Struct for a sequence of ur3e_ros_data__action__MoveL_Goal.
typedef struct ur3e_ros_data__action__MoveL_Goal__Sequence
{
  ur3e_ros_data__action__MoveL_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_Result
{
  rosidl_runtime_c__String result;
} ur3e_ros_data__action__MoveL_Result;

// Struct for a sequence of ur3e_ros_data__action__MoveL_Result.
typedef struct ur3e_ros_data__action__MoveL_Result__Sequence
{
  ur3e_ros_data__action__MoveL_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_Feedback
{
  rosidl_runtime_c__String feedback;
} ur3e_ros_data__action__MoveL_Feedback;

// Struct for a sequence of ur3e_ros_data__action__MoveL_Feedback.
typedef struct ur3e_ros_data__action__MoveL_Feedback__Sequence
{
  ur3e_ros_data__action__MoveL_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ur3e_ros_data/action/detail/move_l__struct.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur3e_ros_data__action__MoveL_Goal goal;
} ur3e_ros_data__action__MoveL_SendGoal_Request;

// Struct for a sequence of ur3e_ros_data__action__MoveL_SendGoal_Request.
typedef struct ur3e_ros_data__action__MoveL_SendGoal_Request__Sequence
{
  ur3e_ros_data__action__MoveL_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ur3e_ros_data__action__MoveL_SendGoal_Response;

// Struct for a sequence of ur3e_ros_data__action__MoveL_SendGoal_Response.
typedef struct ur3e_ros_data__action__MoveL_SendGoal_Response__Sequence
{
  ur3e_ros_data__action__MoveL_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur3e_ros_data__action__MoveL_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur3e_ros_data__action__MoveL_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur3e_ros_data__action__MoveL_SendGoal_Request__Sequence request;
  ur3e_ros_data__action__MoveL_SendGoal_Response__Sequence response;
} ur3e_ros_data__action__MoveL_SendGoal_Event;

// Struct for a sequence of ur3e_ros_data__action__MoveL_SendGoal_Event.
typedef struct ur3e_ros_data__action__MoveL_SendGoal_Event__Sequence
{
  ur3e_ros_data__action__MoveL_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ur3e_ros_data__action__MoveL_GetResult_Request;

// Struct for a sequence of ur3e_ros_data__action__MoveL_GetResult_Request.
typedef struct ur3e_ros_data__action__MoveL_GetResult_Request__Sequence
{
  ur3e_ros_data__action__MoveL_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ur3e_ros_data/action/detail/move_l__struct.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_GetResult_Response
{
  int8_t status;
  ur3e_ros_data__action__MoveL_Result result;
} ur3e_ros_data__action__MoveL_GetResult_Response;

// Struct for a sequence of ur3e_ros_data__action__MoveL_GetResult_Response.
typedef struct ur3e_ros_data__action__MoveL_GetResult_Response__Sequence
{
  ur3e_ros_data__action__MoveL_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur3e_ros_data__action__MoveL_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur3e_ros_data__action__MoveL_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur3e_ros_data__action__MoveL_GetResult_Request__Sequence request;
  ur3e_ros_data__action__MoveL_GetResult_Response__Sequence response;
} ur3e_ros_data__action__MoveL_GetResult_Event;

// Struct for a sequence of ur3e_ros_data__action__MoveL_GetResult_Event.
typedef struct ur3e_ros_data__action__MoveL_GetResult_Event__Sequence
{
  ur3e_ros_data__action__MoveL_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ur3e_ros_data/action/detail/move_l__struct.h"

/// Struct defined in action/MoveL in the package ur3e_ros_data.
typedef struct ur3e_ros_data__action__MoveL_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur3e_ros_data__action__MoveL_Feedback feedback;
} ur3e_ros_data__action__MoveL_FeedbackMessage;

// Struct for a sequence of ur3e_ros_data__action__MoveL_FeedbackMessage.
typedef struct ur3e_ros_data__action__MoveL_FeedbackMessage__Sequence
{
  ur3e_ros_data__action__MoveL_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__action__MoveL_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR3E_ROS_DATA__ACTION__DETAIL__MOVE_L__STRUCT_H_

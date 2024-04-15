// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur3e_ros_data:action/MoveXYZW.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
#include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
#include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_Goal__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_member_array[7] = {
  {
    "posx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, posx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, posy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, posz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_Goal",  // message name
  7,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_Goal),
  ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_Goal__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_Goal__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_Goal)() {
  if (!ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_Goal__rosidl_typesupport_introspection_c__MoveXYZW_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_Result__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_Result",  // message name
  1,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_Result),
  ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_Result__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_Result__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_Result)() {
  if (!ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_Result__rosidl_typesupport_introspection_c__MoveXYZW_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_Feedback__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_Feedback",  // message name
  1,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_Feedback),
  ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_Feedback__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_Feedback__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_Feedback)() {
  if (!ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_Feedback__rosidl_typesupport_introspection_c__MoveXYZW_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ur3e_ros_data/action/move_xyzw.h"
// Member `goal`
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_SendGoal_Request),
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Request__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Request__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Request)() {
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_Goal)();
  if (!ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_SendGoal_Response),
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Response__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Response__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Response)() {
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "ur3e_ros_data/action/move_xyzw.h"
// Member `request`
// Member `response`
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__fini(message_memory);
}

size_t ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_SendGoal_Event__request(
  const void * untyped_member)
{
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Request * item =
    ((const ur3e_ros_data__action__MoveXYZW_SendGoal_Request *)
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_SendGoal_Event__request(untyped_member, index));
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request * value =
    (ur3e_ros_data__action__MoveXYZW_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request * item =
    ((ur3e_ros_data__action__MoveXYZW_SendGoal_Request *)
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_SendGoal_Event__request(untyped_member, index));
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Request * value =
    (const ur3e_ros_data__action__MoveXYZW_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence *)(untyped_member);
  ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence__fini(member);
  return ur3e_ros_data__action__MoveXYZW_SendGoal_Request__Sequence__init(member, size);
}

size_t ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_SendGoal_Event__response(
  const void * untyped_member)
{
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Response * item =
    ((const ur3e_ros_data__action__MoveXYZW_SendGoal_Response *)
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_SendGoal_Event__response(untyped_member, index));
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response * value =
    (ur3e_ros_data__action__MoveXYZW_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response * item =
    ((ur3e_ros_data__action__MoveXYZW_SendGoal_Response *)
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_SendGoal_Event__response(untyped_member, index));
  const ur3e_ros_data__action__MoveXYZW_SendGoal_Response * value =
    (const ur3e_ros_data__action__MoveXYZW_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence *)(untyped_member);
  ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence__fini(member);
  return ur3e_ros_data__action__MoveXYZW_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_SendGoal_Event__request,  // size() function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_SendGoal_Event__request,  // get_const(index) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_SendGoal_Event__request,  // get(index) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_SendGoal_Event__request,  // fetch(index, &value) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_SendGoal_Event__request,  // assign(index, value) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_SendGoal_Event__response,  // size() function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_SendGoal_Event__response,  // get_const(index) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_SendGoal_Event__response,  // get(index) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_SendGoal_Event__response,  // fetch(index, &value) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_SendGoal_Event__response,  // assign(index, value) function pointer
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_SendGoal_Event),
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Event__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Event__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Event)() {
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Request)();
  ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Response)();
  if (!ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_members = {
  "ur3e_ros_data__action",  // service namespace
  "MoveXYZW_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_type_support_handle = {
  0,
  &ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Request_message_type_support_handle,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Response_message_type_support_handle,
  &ur3e_ros_data__action__MoveXYZW_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZW_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZW_SendGoal
  ),
  &ur3e_ros_data__action__MoveXYZW_SendGoal__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_SendGoal__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_SendGoal__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal)() {
  if (!ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_SendGoal_Event)()->data;
  }

  return &ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_GetResult_Request),
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Request__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Request__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Request)() {
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ur3e_ros_data/action/move_xyzw.h"
// Member `result`
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_GetResult_Response),
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Response__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Response__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Response)() {
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_Result)();
  if (!ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "ur3e_ros_data/action/move_xyzw.h"
// Member `request`
// Member `response`
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__fini(message_memory);
}

size_t ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_GetResult_Event__request(
  const void * untyped_member)
{
  const ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur3e_ros_data__action__MoveXYZW_GetResult_Request * item =
    ((const ur3e_ros_data__action__MoveXYZW_GetResult_Request *)
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_GetResult_Event__request(untyped_member, index));
  ur3e_ros_data__action__MoveXYZW_GetResult_Request * value =
    (ur3e_ros_data__action__MoveXYZW_GetResult_Request *)(untyped_value);
  *value = *item;
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Request * item =
    ((ur3e_ros_data__action__MoveXYZW_GetResult_Request *)
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_GetResult_Event__request(untyped_member, index));
  const ur3e_ros_data__action__MoveXYZW_GetResult_Request * value =
    (const ur3e_ros_data__action__MoveXYZW_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence *)(untyped_member);
  ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence__fini(member);
  return ur3e_ros_data__action__MoveXYZW_GetResult_Request__Sequence__init(member, size);
}

size_t ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_GetResult_Event__response(
  const void * untyped_member)
{
  const ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence * member =
    (const ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur3e_ros_data__action__MoveXYZW_GetResult_Response * item =
    ((const ur3e_ros_data__action__MoveXYZW_GetResult_Response *)
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_GetResult_Event__response(untyped_member, index));
  ur3e_ros_data__action__MoveXYZW_GetResult_Response * value =
    (ur3e_ros_data__action__MoveXYZW_GetResult_Response *)(untyped_value);
  *value = *item;
}

void ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Response * item =
    ((ur3e_ros_data__action__MoveXYZW_GetResult_Response *)
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_GetResult_Event__response(untyped_member, index));
  const ur3e_ros_data__action__MoveXYZW_GetResult_Response * value =
    (const ur3e_ros_data__action__MoveXYZW_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence * member =
    (ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence *)(untyped_member);
  ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence__fini(member);
  return ur3e_ros_data__action__MoveXYZW_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_GetResult_Event__request,  // size() function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_GetResult_Event__request,  // get_const(index) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_GetResult_Event__request,  // get(index) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_GetResult_Event__request,  // fetch(index, &value) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_GetResult_Event__request,  // assign(index, value) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXYZW_GetResult_Event__response,  // size() function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXYZW_GetResult_Event__response,  // get_const(index) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXYZW_GetResult_Event__response,  // get(index) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXYZW_GetResult_Event__response,  // fetch(index, &value) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXYZW_GetResult_Event__response,  // assign(index, value) function pointer
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXYZW_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_GetResult_Event),
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Event__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Event__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Event)() {
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Request)();
  ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Response)();
  if (!ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_members = {
  "ur3e_ros_data__action",  // service namespace
  "MoveXYZW_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_type_support_handle = {
  0,
  &ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_members,
  get_service_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Request_message_type_support_handle,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Response_message_type_support_handle,
  &ur3e_ros_data__action__MoveXYZW_GetResult_Event__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZW_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZW_GetResult
  ),
  &ur3e_ros_data__action__MoveXYZW_GetResult__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_GetResult__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_GetResult__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult)() {
  if (!ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_GetResult_Event)()->data;
  }

  return &ur3e_ros_data__action__detail__move_xyzw__rosidl_typesupport_introspection_c__MoveXYZW_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ur3e_ros_data/action/move_xyzw.h"
// Member `feedback`
// already included above
// #include "ur3e_ros_data/action/detail/move_xyzw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__init(message_memory);
}

void ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_fini_function(void * message_memory)
{
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__action__MoveXYZW_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_members = {
  "ur3e_ros_data__action",  // message namespace
  "MoveXYZW_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data__action__MoveXYZW_FeedbackMessage),
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_member_array,  // message members
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_type_support_handle = {
  0,
  &ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZW_FeedbackMessage__get_type_hash,
  &ur3e_ros_data__action__MoveXYZW_FeedbackMessage__get_type_description,
  &ur3e_ros_data__action__MoveXYZW_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_FeedbackMessage)() {
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZW_Feedback)();
  if (!ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__action__MoveXYZW_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZW_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

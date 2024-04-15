// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur3e_ros_data:action/MoveXYZ.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur3e_ros_data/action/detail/move_xyz__functions.h"
#include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_Goal(_init);
}

void MoveXYZ_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_Goal *>(message_memory);
  typed_message->~MoveXYZ_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_Goal_message_member_array[4] = {
  {
    "posx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_Goal, posx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "posy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_Goal, posy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "posz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_Goal, posz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_Goal, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_Goal_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_Goal",  // message name
  4,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_Goal),
  MoveXYZ_Goal_message_member_array,  // message members
  MoveXYZ_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_Goal_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_Goal__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_Goal__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_Goal>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_Goal)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_Result(_init);
}

void MoveXYZ_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_Result *>(message_memory);
  typed_message->~MoveXYZ_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_Result_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_Result, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_Result_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_Result",  // message name
  1,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_Result),
  MoveXYZ_Result_message_member_array,  // message members
  MoveXYZ_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_Result_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_Result__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_Result__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_Result>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_Result)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_Feedback(_init);
}

void MoveXYZ_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_Feedback *>(message_memory);
  typed_message->~MoveXYZ_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_Feedback, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_Feedback_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_Feedback",  // message name
  1,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_Feedback),
  MoveXYZ_Feedback_message_member_array,  // message members
  MoveXYZ_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_Feedback_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_Feedback__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_Feedback__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_Feedback>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_Feedback)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_SendGoal_Request(_init);
}

void MoveXYZ_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Request *>(message_memory);
  typed_message->~MoveXYZ_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_SendGoal_Request_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_SendGoal_Request),
  MoveXYZ_SendGoal_Request_message_member_array,  // message members
  MoveXYZ_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Request__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Request__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Request>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_SendGoal_Request)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_SendGoal_Response(_init);
}

void MoveXYZ_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Response *>(message_memory);
  typed_message->~MoveXYZ_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_SendGoal_Response_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_SendGoal_Response),
  MoveXYZ_SendGoal_Response_message_member_array,  // message members
  MoveXYZ_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Response__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Response__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Response>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_SendGoal_Response)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_SendGoal_Event(_init);
}

void MoveXYZ_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Event *>(message_memory);
  typed_message->~MoveXYZ_SendGoal_Event();
}

size_t size_function__MoveXYZ_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveXYZ_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveXYZ_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveXYZ_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_SendGoal_Request *>(
    get_const_function__MoveXYZ_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__MoveXYZ_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Request *>(
    get_function__MoveXYZ_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__MoveXYZ_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MoveXYZ_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveXYZ_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveXYZ_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveXYZ_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_SendGoal_Response *>(
    get_const_function__MoveXYZ_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__MoveXYZ_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_SendGoal_Response *>(
    get_function__MoveXYZ_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__MoveXYZ_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveXYZ_SendGoal_Event__request,  // size() function pointer
    get_const_function__MoveXYZ_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__MoveXYZ_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__MoveXYZ_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__MoveXYZ_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__MoveXYZ_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveXYZ_SendGoal_Event__response,  // size() function pointer
    get_const_function__MoveXYZ_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__MoveXYZ_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__MoveXYZ_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__MoveXYZ_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__MoveXYZ_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_SendGoal_Event_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_SendGoal_Event),
  MoveXYZ_SendGoal_Event_message_member_array,  // message members
  MoveXYZ_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Event__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Event__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Event>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_SendGoal_Event)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MoveXYZ_SendGoal_service_members = {
  "ur3e_ros_data::action",  // service namespace
  "MoveXYZ_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t MoveXYZ_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur3e_ros_data::action::MoveXYZ_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur3e_ros_data::action::MoveXYZ_SendGoal>,
  &ur3e_ros_data__action__MoveXYZ_SendGoal__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur3e_ros_data::action::MoveXYZ_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur3e_ros_data::action::MoveXYZ_SendGoal_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur3e_ros_data::action::MoveXYZ_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ur3e_ros_data::action::MoveXYZ_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_GetResult_Request(_init);
}

void MoveXYZ_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Request *>(message_memory);
  typed_message->~MoveXYZ_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_GetResult_Request_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_GetResult_Request),
  MoveXYZ_GetResult_Request_message_member_array,  // message members
  MoveXYZ_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Request__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Request__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Request>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_GetResult_Request)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_GetResult_Response(_init);
}

void MoveXYZ_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Response *>(message_memory);
  typed_message->~MoveXYZ_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_GetResult_Response_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_GetResult_Response),
  MoveXYZ_GetResult_Response_message_member_array,  // message members
  MoveXYZ_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Response__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Response__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Response>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_GetResult_Response)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_GetResult_Event(_init);
}

void MoveXYZ_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Event *>(message_memory);
  typed_message->~MoveXYZ_GetResult_Event();
}

size_t size_function__MoveXYZ_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveXYZ_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveXYZ_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveXYZ_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_GetResult_Request *>(
    get_const_function__MoveXYZ_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__MoveXYZ_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Request *>(
    get_function__MoveXYZ_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__MoveXYZ_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MoveXYZ_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveXYZ_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveXYZ_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveXYZ_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_GetResult_Response *>(
    get_const_function__MoveXYZ_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__MoveXYZ_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur3e_ros_data::action::MoveXYZ_GetResult_Response *>(
    get_function__MoveXYZ_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur3e_ros_data::action::MoveXYZ_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__MoveXYZ_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur3e_ros_data::action::MoveXYZ_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveXYZ_GetResult_Event__request,  // size() function pointer
    get_const_function__MoveXYZ_GetResult_Event__request,  // get_const(index) function pointer
    get_function__MoveXYZ_GetResult_Event__request,  // get(index) function pointer
    fetch_function__MoveXYZ_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__MoveXYZ_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__MoveXYZ_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveXYZ_GetResult_Event__response,  // size() function pointer
    get_const_function__MoveXYZ_GetResult_Event__response,  // get_const(index) function pointer
    get_function__MoveXYZ_GetResult_Event__response,  // get(index) function pointer
    fetch_function__MoveXYZ_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__MoveXYZ_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__MoveXYZ_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_GetResult_Event_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_GetResult_Event),
  MoveXYZ_GetResult_Event_message_member_array,  // message members
  MoveXYZ_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Event__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Event__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Event>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_GetResult_Event)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MoveXYZ_GetResult_service_members = {
  "ur3e_ros_data::action",  // service namespace
  "MoveXYZ_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t MoveXYZ_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur3e_ros_data::action::MoveXYZ_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur3e_ros_data::action::MoveXYZ_GetResult>,
  &ur3e_ros_data__action__MoveXYZ_GetResult__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur3e_ros_data::action::MoveXYZ_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur3e_ros_data::action::MoveXYZ_GetResult_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur3e_ros_data::action::MoveXYZ_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ur3e_ros_data::action::MoveXYZ_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveXYZ_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur3e_ros_data::action::MoveXYZ_FeedbackMessage(_init);
}

void MoveXYZ_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur3e_ros_data::action::MoveXYZ_FeedbackMessage *>(message_memory);
  typed_message->~MoveXYZ_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveXYZ_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data::action::MoveXYZ_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveXYZ_FeedbackMessage_message_members = {
  "ur3e_ros_data::action",  // message namespace
  "MoveXYZ_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ur3e_ros_data::action::MoveXYZ_FeedbackMessage),
  MoveXYZ_FeedbackMessage_message_member_array,  // message members
  MoveXYZ_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveXYZ_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveXYZ_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_FeedbackMessage__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_FeedbackMessage__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur3e_ros_data


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur3e_ros_data::action::MoveXYZ_FeedbackMessage>()
{
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur3e_ros_data, action, MoveXYZ_FeedbackMessage)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_introspection_cpp::MoveXYZ_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

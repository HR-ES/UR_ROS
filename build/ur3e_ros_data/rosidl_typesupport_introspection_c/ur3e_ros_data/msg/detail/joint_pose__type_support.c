// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur3e_ros_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur3e_ros_data/msg/detail/joint_pose__rosidl_typesupport_introspection_c.h"
#include "ur3e_ros_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur3e_ros_data/msg/detail/joint_pose__functions.h"
#include "ur3e_ros_data/msg/detail/joint_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur3e_ros_data__msg__JointPose__init(message_memory);
}

void ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_fini_function(void * message_memory)
{
  ur3e_ros_data__msg__JointPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_member_array[6] = {
  {
    "joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__msg__JointPose, joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__msg__JointPose, joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__msg__JointPose, joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__msg__JointPose, joint4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__msg__JointPose, joint5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur3e_ros_data__msg__JointPose, joint6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_members = {
  "ur3e_ros_data__msg",  // message namespace
  "JointPose",  // message name
  6,  // number of fields
  sizeof(ur3e_ros_data__msg__JointPose),
  ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_member_array,  // message members
  ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_init_function,  // function to initialize message memory (memory has to be allocated)
  ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_type_support_handle = {
  0,
  &ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_members,
  get_message_typesupport_handle_function,
  &ur3e_ros_data__msg__JointPose__get_type_hash,
  &ur3e_ros_data__msg__JointPose__get_type_description,
  &ur3e_ros_data__msg__JointPose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur3e_ros_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, msg, JointPose)() {
  if (!ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_type_support_handle.typesupport_identifier) {
    ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur3e_ros_data__msg__JointPose__rosidl_typesupport_introspection_c__JointPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

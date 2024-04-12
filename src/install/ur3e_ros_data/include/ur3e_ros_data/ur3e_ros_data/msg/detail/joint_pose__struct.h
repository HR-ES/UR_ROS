// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur3e_ros_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef UR3E_ROS_DATA__MSG__DETAIL__JOINT_POSE__STRUCT_H_
#define UR3E_ROS_DATA__MSG__DETAIL__JOINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/JointPose in the package ur3e_ros_data.
typedef struct ur3e_ros_data__msg__JointPose
{
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double joint5;
  double joint6;
} ur3e_ros_data__msg__JointPose;

// Struct for a sequence of ur3e_ros_data__msg__JointPose.
typedef struct ur3e_ros_data__msg__JointPose__Sequence
{
  ur3e_ros_data__msg__JointPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur3e_ros_data__msg__JointPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR3E_ROS_DATA__MSG__DETAIL__JOINT_POSE__STRUCT_H_

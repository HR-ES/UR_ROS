// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur3e_ros_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#include "ur3e_ros_data/msg/detail/joint_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
const rosidl_type_hash_t *
ur3e_ros_data__msg__JointPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xa7, 0x42, 0x3e, 0xba, 0xdd, 0xcb, 0xe1,
      0xe9, 0x40, 0xf6, 0x1f, 0x00, 0x67, 0xfa, 0xb6,
      0x05, 0x39, 0x71, 0xd3, 0x7f, 0x7a, 0x16, 0x58,
      0x32, 0xa2, 0xfd, 0x7a, 0x0c, 0x44, 0x0e, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur3e_ros_data__msg__JointPose__TYPE_NAME[] = "ur3e_ros_data/msg/JointPose";

// Define type names, field names, and default values
static char ur3e_ros_data__msg__JointPose__FIELD_NAME__joint1[] = "joint1";
static char ur3e_ros_data__msg__JointPose__FIELD_NAME__joint2[] = "joint2";
static char ur3e_ros_data__msg__JointPose__FIELD_NAME__joint3[] = "joint3";
static char ur3e_ros_data__msg__JointPose__FIELD_NAME__joint4[] = "joint4";
static char ur3e_ros_data__msg__JointPose__FIELD_NAME__joint5[] = "joint5";
static char ur3e_ros_data__msg__JointPose__FIELD_NAME__joint6[] = "joint6";

static rosidl_runtime_c__type_description__Field ur3e_ros_data__msg__JointPose__FIELDS[] = {
  {
    {ur3e_ros_data__msg__JointPose__FIELD_NAME__joint1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur3e_ros_data__msg__JointPose__FIELD_NAME__joint2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur3e_ros_data__msg__JointPose__FIELD_NAME__joint3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur3e_ros_data__msg__JointPose__FIELD_NAME__joint4, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur3e_ros_data__msg__JointPose__FIELD_NAME__joint5, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur3e_ros_data__msg__JointPose__FIELD_NAME__joint6, 6, 6},
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
ur3e_ros_data__msg__JointPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur3e_ros_data__msg__JointPose__TYPE_NAME, 27, 27},
      {ur3e_ros_data__msg__JointPose__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 joint1\n"
  "float64 joint2\n"
  "float64 joint3\n"
  "float64 joint4\n"
  "float64 joint5\n"
  "float64 joint6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur3e_ros_data__msg__JointPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur3e_ros_data__msg__JointPose__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur3e_ros_data__msg__JointPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur3e_ros_data__msg__JointPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

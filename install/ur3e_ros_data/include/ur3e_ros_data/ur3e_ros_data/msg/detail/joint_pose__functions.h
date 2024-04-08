// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ur3e_ros_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef UR3E_ROS_DATA__MSG__DETAIL__JOINT_POSE__FUNCTIONS_H_
#define UR3E_ROS_DATA__MSG__DETAIL__JOINT_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "ur3e_ros_data/msg/rosidl_generator_c__visibility_control.h"

#include "ur3e_ros_data/msg/detail/joint_pose__struct.h"

/// Initialize msg/JointPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur3e_ros_data__msg__JointPose
 * )) before or use
 * ur3e_ros_data__msg__JointPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
bool
ur3e_ros_data__msg__JointPose__init(ur3e_ros_data__msg__JointPose * msg);

/// Finalize msg/JointPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
void
ur3e_ros_data__msg__JointPose__fini(ur3e_ros_data__msg__JointPose * msg);

/// Create msg/JointPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur3e_ros_data__msg__JointPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
ur3e_ros_data__msg__JointPose *
ur3e_ros_data__msg__JointPose__create();

/// Destroy msg/JointPose message.
/**
 * It calls
 * ur3e_ros_data__msg__JointPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
void
ur3e_ros_data__msg__JointPose__destroy(ur3e_ros_data__msg__JointPose * msg);

/// Check for msg/JointPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
bool
ur3e_ros_data__msg__JointPose__are_equal(const ur3e_ros_data__msg__JointPose * lhs, const ur3e_ros_data__msg__JointPose * rhs);

/// Copy a msg/JointPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
bool
ur3e_ros_data__msg__JointPose__copy(
  const ur3e_ros_data__msg__JointPose * input,
  ur3e_ros_data__msg__JointPose * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
const rosidl_type_hash_t *
ur3e_ros_data__msg__JointPose__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
const rosidl_runtime_c__type_description__TypeDescription *
ur3e_ros_data__msg__JointPose__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
const rosidl_runtime_c__type_description__TypeSource *
ur3e_ros_data__msg__JointPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur3e_ros_data__msg__JointPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/JointPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur3e_ros_data__msg__JointPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
bool
ur3e_ros_data__msg__JointPose__Sequence__init(ur3e_ros_data__msg__JointPose__Sequence * array, size_t size);

/// Finalize array of msg/JointPose messages.
/**
 * It calls
 * ur3e_ros_data__msg__JointPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
void
ur3e_ros_data__msg__JointPose__Sequence__fini(ur3e_ros_data__msg__JointPose__Sequence * array);

/// Create array of msg/JointPose messages.
/**
 * It allocates the memory for the array and calls
 * ur3e_ros_data__msg__JointPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
ur3e_ros_data__msg__JointPose__Sequence *
ur3e_ros_data__msg__JointPose__Sequence__create(size_t size);

/// Destroy array of msg/JointPose messages.
/**
 * It calls
 * ur3e_ros_data__msg__JointPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
void
ur3e_ros_data__msg__JointPose__Sequence__destroy(ur3e_ros_data__msg__JointPose__Sequence * array);

/// Check for msg/JointPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
bool
ur3e_ros_data__msg__JointPose__Sequence__are_equal(const ur3e_ros_data__msg__JointPose__Sequence * lhs, const ur3e_ros_data__msg__JointPose__Sequence * rhs);

/// Copy an array of msg/JointPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur3e_ros_data
bool
ur3e_ros_data__msg__JointPose__Sequence__copy(
  const ur3e_ros_data__msg__JointPose__Sequence * input,
  ur3e_ros_data__msg__JointPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UR3E_ROS_DATA__MSG__DETAIL__JOINT_POSE__FUNCTIONS_H_

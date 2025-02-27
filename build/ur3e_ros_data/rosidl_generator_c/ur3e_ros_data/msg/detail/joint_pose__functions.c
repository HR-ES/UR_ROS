// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur3e_ros_data:msg/JointPose.idl
// generated code does not contain a copyright notice
#include "ur3e_ros_data/msg/detail/joint_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ur3e_ros_data__msg__JointPose__init(ur3e_ros_data__msg__JointPose * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  return true;
}

void
ur3e_ros_data__msg__JointPose__fini(ur3e_ros_data__msg__JointPose * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
}

bool
ur3e_ros_data__msg__JointPose__are_equal(const ur3e_ros_data__msg__JointPose * lhs, const ur3e_ros_data__msg__JointPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint4
  if (lhs->joint4 != rhs->joint4) {
    return false;
  }
  // joint5
  if (lhs->joint5 != rhs->joint5) {
    return false;
  }
  // joint6
  if (lhs->joint6 != rhs->joint6) {
    return false;
  }
  return true;
}

bool
ur3e_ros_data__msg__JointPose__copy(
  const ur3e_ros_data__msg__JointPose * input,
  ur3e_ros_data__msg__JointPose * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint4
  output->joint4 = input->joint4;
  // joint5
  output->joint5 = input->joint5;
  // joint6
  output->joint6 = input->joint6;
  return true;
}

ur3e_ros_data__msg__JointPose *
ur3e_ros_data__msg__JointPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur3e_ros_data__msg__JointPose * msg = (ur3e_ros_data__msg__JointPose *)allocator.allocate(sizeof(ur3e_ros_data__msg__JointPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur3e_ros_data__msg__JointPose));
  bool success = ur3e_ros_data__msg__JointPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur3e_ros_data__msg__JointPose__destroy(ur3e_ros_data__msg__JointPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur3e_ros_data__msg__JointPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur3e_ros_data__msg__JointPose__Sequence__init(ur3e_ros_data__msg__JointPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur3e_ros_data__msg__JointPose * data = NULL;

  if (size) {
    data = (ur3e_ros_data__msg__JointPose *)allocator.zero_allocate(size, sizeof(ur3e_ros_data__msg__JointPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur3e_ros_data__msg__JointPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur3e_ros_data__msg__JointPose__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur3e_ros_data__msg__JointPose__Sequence__fini(ur3e_ros_data__msg__JointPose__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur3e_ros_data__msg__JointPose__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur3e_ros_data__msg__JointPose__Sequence *
ur3e_ros_data__msg__JointPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur3e_ros_data__msg__JointPose__Sequence * array = (ur3e_ros_data__msg__JointPose__Sequence *)allocator.allocate(sizeof(ur3e_ros_data__msg__JointPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur3e_ros_data__msg__JointPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur3e_ros_data__msg__JointPose__Sequence__destroy(ur3e_ros_data__msg__JointPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur3e_ros_data__msg__JointPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur3e_ros_data__msg__JointPose__Sequence__are_equal(const ur3e_ros_data__msg__JointPose__Sequence * lhs, const ur3e_ros_data__msg__JointPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur3e_ros_data__msg__JointPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur3e_ros_data__msg__JointPose__Sequence__copy(
  const ur3e_ros_data__msg__JointPose__Sequence * input,
  ur3e_ros_data__msg__JointPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur3e_ros_data__msg__JointPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur3e_ros_data__msg__JointPose * data =
      (ur3e_ros_data__msg__JointPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur3e_ros_data__msg__JointPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur3e_ros_data__msg__JointPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur3e_ros_data__msg__JointPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

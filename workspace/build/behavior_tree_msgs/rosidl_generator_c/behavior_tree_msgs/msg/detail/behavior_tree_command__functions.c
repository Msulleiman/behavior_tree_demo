// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `condition_name`
#include "rosidl_runtime_c/string_functions.h"

bool
behavior_tree_msgs__msg__BehaviorTreeCommand__init(behavior_tree_msgs__msg__BehaviorTreeCommand * msg)
{
  if (!msg) {
    return false;
  }
  // condition_name
  if (!rosidl_runtime_c__String__init(&msg->condition_name)) {
    behavior_tree_msgs__msg__BehaviorTreeCommand__fini(msg);
    return false;
  }
  // status
  return true;
}

void
behavior_tree_msgs__msg__BehaviorTreeCommand__fini(behavior_tree_msgs__msg__BehaviorTreeCommand * msg)
{
  if (!msg) {
    return;
  }
  // condition_name
  rosidl_runtime_c__String__fini(&msg->condition_name);
  // status
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommand__are_equal(const behavior_tree_msgs__msg__BehaviorTreeCommand * lhs, const behavior_tree_msgs__msg__BehaviorTreeCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // condition_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->condition_name), &(rhs->condition_name)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommand__copy(
  const behavior_tree_msgs__msg__BehaviorTreeCommand * input,
  behavior_tree_msgs__msg__BehaviorTreeCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // condition_name
  if (!rosidl_runtime_c__String__copy(
      &(input->condition_name), &(output->condition_name)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

behavior_tree_msgs__msg__BehaviorTreeCommand *
behavior_tree_msgs__msg__BehaviorTreeCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BehaviorTreeCommand * msg = (behavior_tree_msgs__msg__BehaviorTreeCommand *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BehaviorTreeCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__msg__BehaviorTreeCommand));
  bool success = behavior_tree_msgs__msg__BehaviorTreeCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__msg__BehaviorTreeCommand__destroy(behavior_tree_msgs__msg__BehaviorTreeCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__msg__BehaviorTreeCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__init(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BehaviorTreeCommand * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__msg__BehaviorTreeCommand *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__msg__BehaviorTreeCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__msg__BehaviorTreeCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__msg__BehaviorTreeCommand__fini(&data[i - 1]);
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
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__fini(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array)
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
      behavior_tree_msgs__msg__BehaviorTreeCommand__fini(&array->data[i]);
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

behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence *
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array = (behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__destroy(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__are_equal(const behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * lhs, const behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__msg__BehaviorTreeCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__copy(
  const behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * input,
  behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__msg__BehaviorTreeCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__msg__BehaviorTreeCommand * data =
      (behavior_tree_msgs__msg__BehaviorTreeCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__msg__BehaviorTreeCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__msg__BehaviorTreeCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__msg__BehaviorTreeCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

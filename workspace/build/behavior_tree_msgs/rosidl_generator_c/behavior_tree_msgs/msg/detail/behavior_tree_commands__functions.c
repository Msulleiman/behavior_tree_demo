// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/behavior_tree_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `commands`
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__functions.h"

bool
behavior_tree_msgs__msg__BehaviorTreeCommands__init(behavior_tree_msgs__msg__BehaviorTreeCommands * msg)
{
  if (!msg) {
    return false;
  }
  // commands
  if (!behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__init(&msg->commands, 0)) {
    behavior_tree_msgs__msg__BehaviorTreeCommands__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__msg__BehaviorTreeCommands__fini(behavior_tree_msgs__msg__BehaviorTreeCommands * msg)
{
  if (!msg) {
    return;
  }
  // commands
  behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__fini(&msg->commands);
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommands__are_equal(const behavior_tree_msgs__msg__BehaviorTreeCommands * lhs, const behavior_tree_msgs__msg__BehaviorTreeCommands * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // commands
  if (!behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__are_equal(
      &(lhs->commands), &(rhs->commands)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommands__copy(
  const behavior_tree_msgs__msg__BehaviorTreeCommands * input,
  behavior_tree_msgs__msg__BehaviorTreeCommands * output)
{
  if (!input || !output) {
    return false;
  }
  // commands
  if (!behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__copy(
      &(input->commands), &(output->commands)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__msg__BehaviorTreeCommands *
behavior_tree_msgs__msg__BehaviorTreeCommands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BehaviorTreeCommands * msg = (behavior_tree_msgs__msg__BehaviorTreeCommands *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BehaviorTreeCommands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__msg__BehaviorTreeCommands));
  bool success = behavior_tree_msgs__msg__BehaviorTreeCommands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__msg__BehaviorTreeCommands__destroy(behavior_tree_msgs__msg__BehaviorTreeCommands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__msg__BehaviorTreeCommands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__init(behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BehaviorTreeCommands * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__msg__BehaviorTreeCommands *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__msg__BehaviorTreeCommands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__msg__BehaviorTreeCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__msg__BehaviorTreeCommands__fini(&data[i - 1]);
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
behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__fini(behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * array)
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
      behavior_tree_msgs__msg__BehaviorTreeCommands__fini(&array->data[i]);
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

behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence *
behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * array = (behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__destroy(behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__are_equal(const behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * lhs, const behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__msg__BehaviorTreeCommands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence__copy(
  const behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * input,
  behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__msg__BehaviorTreeCommands);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__msg__BehaviorTreeCommands * data =
      (behavior_tree_msgs__msg__BehaviorTreeCommands *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__msg__BehaviorTreeCommands__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__msg__BehaviorTreeCommands__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__msg__BehaviorTreeCommands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

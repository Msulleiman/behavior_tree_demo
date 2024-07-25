// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__FUNCTIONS_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_tree_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.h"

/// Initialize msg/BehaviorTreeCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_tree_msgs__msg__BehaviorTreeCommand
 * )) before or use
 * behavior_tree_msgs__msg__BehaviorTreeCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__BehaviorTreeCommand__init(behavior_tree_msgs__msg__BehaviorTreeCommand * msg);

/// Finalize msg/BehaviorTreeCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__BehaviorTreeCommand__fini(behavior_tree_msgs__msg__BehaviorTreeCommand * msg);

/// Create msg/BehaviorTreeCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_tree_msgs__msg__BehaviorTreeCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
behavior_tree_msgs__msg__BehaviorTreeCommand *
behavior_tree_msgs__msg__BehaviorTreeCommand__create();

/// Destroy msg/BehaviorTreeCommand message.
/**
 * It calls
 * behavior_tree_msgs__msg__BehaviorTreeCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__BehaviorTreeCommand__destroy(behavior_tree_msgs__msg__BehaviorTreeCommand * msg);

/// Check for msg/BehaviorTreeCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__BehaviorTreeCommand__are_equal(const behavior_tree_msgs__msg__BehaviorTreeCommand * lhs, const behavior_tree_msgs__msg__BehaviorTreeCommand * rhs);

/// Copy a msg/BehaviorTreeCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__BehaviorTreeCommand__copy(
  const behavior_tree_msgs__msg__BehaviorTreeCommand * input,
  behavior_tree_msgs__msg__BehaviorTreeCommand * output);

/// Initialize array of msg/BehaviorTreeCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_tree_msgs__msg__BehaviorTreeCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__init(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array, size_t size);

/// Finalize array of msg/BehaviorTreeCommand messages.
/**
 * It calls
 * behavior_tree_msgs__msg__BehaviorTreeCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__fini(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array);

/// Create array of msg/BehaviorTreeCommand messages.
/**
 * It allocates the memory for the array and calls
 * behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence *
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__create(size_t size);

/// Destroy array of msg/BehaviorTreeCommand messages.
/**
 * It calls
 * behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__destroy(behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * array);

/// Check for msg/BehaviorTreeCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__are_equal(const behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * lhs, const behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * rhs);

/// Copy an array of msg/BehaviorTreeCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__copy(
  const behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * input,
  behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__FUNCTIONS_H_

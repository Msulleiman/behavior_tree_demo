// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'condition_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BehaviorTreeCommand in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__BehaviorTreeCommand
{
  rosidl_runtime_c__String condition_name;
  int8_t status;
} behavior_tree_msgs__msg__BehaviorTreeCommand;

// Struct for a sequence of behavior_tree_msgs__msg__BehaviorTreeCommand.
typedef struct behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence
{
  behavior_tree_msgs__msg__BehaviorTreeCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'commands'
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.h"

/// Struct defined in msg/BehaviorTreeCommands in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__BehaviorTreeCommands
{
  behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence commands;
} behavior_tree_msgs__msg__BehaviorTreeCommands;

// Struct for a sequence of behavior_tree_msgs__msg__BehaviorTreeCommands.
typedef struct behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence
{
  behavior_tree_msgs__msg__BehaviorTreeCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__BehaviorTreeCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__STRUCT_H_

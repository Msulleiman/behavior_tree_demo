// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/Active.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Active in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__Active
{
  bool active;
  int64_t id;
} behavior_tree_msgs__msg__Active;

// Struct for a sequence of behavior_tree_msgs__msg__Active.
typedef struct behavior_tree_msgs__msg__Active__Sequence
{
  behavior_tree_msgs__msg__Active * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__Active__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__STRUCT_H_

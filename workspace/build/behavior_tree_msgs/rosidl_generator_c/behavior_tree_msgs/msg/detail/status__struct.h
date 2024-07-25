// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FAILURE'.
enum
{
  behavior_tree_msgs__msg__Status__FAILURE = 0
};

/// Constant 'RUNNING'.
enum
{
  behavior_tree_msgs__msg__Status__RUNNING = 1
};

/// Constant 'SUCCESS'.
enum
{
  behavior_tree_msgs__msg__Status__SUCCESS = 2
};

/// Struct defined in msg/Status in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__Status
{
  int8_t status;
  uint64_t id;
} behavior_tree_msgs__msg__Status;

// Struct for a sequence of behavior_tree_msgs__msg__Status.
typedef struct behavior_tree_msgs__msg__Status__Sequence
{
  behavior_tree_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.h"
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // condition_name
#include "rosidl_runtime_c/string_functions.h"  // condition_name

// forward declare type support functions


using _BehaviorTreeCommand__ros_msg_type = behavior_tree_msgs__msg__BehaviorTreeCommand;

static bool _BehaviorTreeCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BehaviorTreeCommand__ros_msg_type * ros_message = static_cast<const _BehaviorTreeCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: condition_name
  {
    const rosidl_runtime_c__String * str = &ros_message->condition_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _BehaviorTreeCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BehaviorTreeCommand__ros_msg_type * ros_message = static_cast<_BehaviorTreeCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: condition_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->condition_name.data) {
      rosidl_runtime_c__String__init(&ros_message->condition_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->condition_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'condition_name'\n");
      return false;
    }
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t get_serialized_size_behavior_tree_msgs__msg__BehaviorTreeCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BehaviorTreeCommand__ros_msg_type * ros_message = static_cast<const _BehaviorTreeCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name condition_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->condition_name.size + 1);
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BehaviorTreeCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__msg__BehaviorTreeCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__msg__BehaviorTreeCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: condition_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = behavior_tree_msgs__msg__BehaviorTreeCommand;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BehaviorTreeCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__msg__BehaviorTreeCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BehaviorTreeCommand = {
  "behavior_tree_msgs::msg",
  "BehaviorTreeCommand",
  _BehaviorTreeCommand__cdr_serialize,
  _BehaviorTreeCommand__cdr_deserialize,
  _BehaviorTreeCommand__get_serialized_size,
  _BehaviorTreeCommand__max_serialized_size
};

static rosidl_message_type_support_t _BehaviorTreeCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BehaviorTreeCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BehaviorTreeCommand)() {
  return &_BehaviorTreeCommand__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace behavior_tree_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_tree_msgs
cdr_serialize(
  const behavior_tree_msgs::msg::BehaviorTreeCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: condition_name
  cdr << ros_message.condition_name;
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_tree_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  behavior_tree_msgs::msg::BehaviorTreeCommand & ros_message)
{
  // Member: condition_name
  cdr >> ros_message.condition_name;

  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_tree_msgs
get_serialized_size(
  const behavior_tree_msgs::msg::BehaviorTreeCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: condition_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.condition_name.size() + 1);
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_tree_msgs
max_serialized_size_BehaviorTreeCommand(
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


  // Member: condition_name
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

  // Member: status
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
    using DataType = behavior_tree_msgs::msg::BehaviorTreeCommand;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BehaviorTreeCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const behavior_tree_msgs::msg::BehaviorTreeCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BehaviorTreeCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<behavior_tree_msgs::msg::BehaviorTreeCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BehaviorTreeCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const behavior_tree_msgs::msg::BehaviorTreeCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BehaviorTreeCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BehaviorTreeCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BehaviorTreeCommand__callbacks = {
  "behavior_tree_msgs::msg",
  "BehaviorTreeCommand",
  _BehaviorTreeCommand__cdr_serialize,
  _BehaviorTreeCommand__cdr_deserialize,
  _BehaviorTreeCommand__get_serialized_size,
  _BehaviorTreeCommand__max_serialized_size
};

static rosidl_message_type_support_t _BehaviorTreeCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BehaviorTreeCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace behavior_tree_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<behavior_tree_msgs::msg::BehaviorTreeCommand>()
{
  return &behavior_tree_msgs::msg::typesupport_fastrtps_cpp::_BehaviorTreeCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, behavior_tree_msgs, msg, BehaviorTreeCommand)() {
  return &behavior_tree_msgs::msg::typesupport_fastrtps_cpp::_BehaviorTreeCommand__handle;
}

#ifdef __cplusplus
}
#endif

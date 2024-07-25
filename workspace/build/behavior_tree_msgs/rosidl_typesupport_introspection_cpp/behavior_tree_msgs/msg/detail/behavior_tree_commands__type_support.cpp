// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "behavior_tree_msgs/msg/detail/behavior_tree_commands__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace behavior_tree_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorTreeCommands_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) behavior_tree_msgs::msg::BehaviorTreeCommands(_init);
}

void BehaviorTreeCommands_fini_function(void * message_memory)
{
  auto typed_message = static_cast<behavior_tree_msgs::msg::BehaviorTreeCommands *>(message_memory);
  typed_message->~BehaviorTreeCommands();
}

size_t size_function__BehaviorTreeCommands__commands(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<behavior_tree_msgs::msg::BehaviorTreeCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorTreeCommands__commands(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<behavior_tree_msgs::msg::BehaviorTreeCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorTreeCommands__commands(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<behavior_tree_msgs::msg::BehaviorTreeCommand> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorTreeCommands__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const behavior_tree_msgs::msg::BehaviorTreeCommand *>(
    get_const_function__BehaviorTreeCommands__commands(untyped_member, index));
  auto & value = *reinterpret_cast<behavior_tree_msgs::msg::BehaviorTreeCommand *>(untyped_value);
  value = item;
}

void assign_function__BehaviorTreeCommands__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<behavior_tree_msgs::msg::BehaviorTreeCommand *>(
    get_function__BehaviorTreeCommands__commands(untyped_member, index));
  const auto & value = *reinterpret_cast<const behavior_tree_msgs::msg::BehaviorTreeCommand *>(untyped_value);
  item = value;
}

void resize_function__BehaviorTreeCommands__commands(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<behavior_tree_msgs::msg::BehaviorTreeCommand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorTreeCommands_message_member_array[1] = {
  {
    "commands",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<behavior_tree_msgs::msg::BehaviorTreeCommand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs::msg::BehaviorTreeCommands, commands),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorTreeCommands__commands,  // size() function pointer
    get_const_function__BehaviorTreeCommands__commands,  // get_const(index) function pointer
    get_function__BehaviorTreeCommands__commands,  // get(index) function pointer
    fetch_function__BehaviorTreeCommands__commands,  // fetch(index, &value) function pointer
    assign_function__BehaviorTreeCommands__commands,  // assign(index, value) function pointer
    resize_function__BehaviorTreeCommands__commands  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorTreeCommands_message_members = {
  "behavior_tree_msgs::msg",  // message namespace
  "BehaviorTreeCommands",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs::msg::BehaviorTreeCommands),
  BehaviorTreeCommands_message_member_array,  // message members
  BehaviorTreeCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorTreeCommands_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorTreeCommands_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorTreeCommands_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace behavior_tree_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<behavior_tree_msgs::msg::BehaviorTreeCommands>()
{
  return &::behavior_tree_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorTreeCommands_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, behavior_tree_msgs, msg, BehaviorTreeCommands)() {
  return &::behavior_tree_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorTreeCommands_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

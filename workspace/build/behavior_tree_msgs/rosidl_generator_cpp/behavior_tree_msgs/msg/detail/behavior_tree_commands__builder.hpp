// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/behavior_tree_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorTreeCommands_commands
{
public:
  Init_BehaviorTreeCommands_commands()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::msg::BehaviorTreeCommands commands(::behavior_tree_msgs::msg::BehaviorTreeCommands::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BehaviorTreeCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BehaviorTreeCommands>()
{
  return behavior_tree_msgs::msg::builder::Init_BehaviorTreeCommands_commands();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorTreeCommand_status
{
public:
  explicit Init_BehaviorTreeCommand_status(::behavior_tree_msgs::msg::BehaviorTreeCommand & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::BehaviorTreeCommand status(::behavior_tree_msgs::msg::BehaviorTreeCommand::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BehaviorTreeCommand msg_;
};

class Init_BehaviorTreeCommand_condition_name
{
public:
  Init_BehaviorTreeCommand_condition_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorTreeCommand_status condition_name(::behavior_tree_msgs::msg::BehaviorTreeCommand::_condition_name_type arg)
  {
    msg_.condition_name = std::move(arg);
    return Init_BehaviorTreeCommand_status(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BehaviorTreeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BehaviorTreeCommand>()
{
  return behavior_tree_msgs::msg::builder::Init_BehaviorTreeCommand_condition_name();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__BUILDER_HPP_

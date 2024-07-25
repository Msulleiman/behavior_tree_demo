// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_id
{
public:
  explicit Init_Status_id(::behavior_tree_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::Status id(::behavior_tree_msgs::msg::Status::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Status msg_;
};

class Init_Status_status
{
public:
  Init_Status_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_id status(::behavior_tree_msgs::msg::Status::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Status_id(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::Status>()
{
  return behavior_tree_msgs::msg::builder::Init_Status_status();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

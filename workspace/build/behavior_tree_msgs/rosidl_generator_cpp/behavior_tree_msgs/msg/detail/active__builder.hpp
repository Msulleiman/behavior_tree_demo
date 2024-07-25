// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/Active.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/active__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_Active_id
{
public:
  explicit Init_Active_id(::behavior_tree_msgs::msg::Active & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::Active id(::behavior_tree_msgs::msg::Active::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Active msg_;
};

class Init_Active_active
{
public:
  Init_Active_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Active_id active(::behavior_tree_msgs::msg::Active::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_Active_id(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Active msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::Active>()
{
  return behavior_tree_msgs::msg::builder::Init_Active_active();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__BUILDER_HPP_

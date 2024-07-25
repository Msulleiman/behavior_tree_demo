// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_tree_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorTreeCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: condition_name
  {
    out << "condition_name: ";
    rosidl_generator_traits::value_to_yaml(msg.condition_name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorTreeCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: condition_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "condition_name: ";
    rosidl_generator_traits::value_to_yaml(msg.condition_name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorTreeCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::msg::BehaviorTreeCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::msg::BehaviorTreeCommand & msg)
{
  return behavior_tree_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::msg::BehaviorTreeCommand>()
{
  return "behavior_tree_msgs::msg::BehaviorTreeCommand";
}

template<>
inline const char * name<behavior_tree_msgs::msg::BehaviorTreeCommand>()
{
  return "behavior_tree_msgs/msg/BehaviorTreeCommand";
}

template<>
struct has_fixed_size<behavior_tree_msgs::msg::BehaviorTreeCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::msg::BehaviorTreeCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::msg::BehaviorTreeCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__TRAITS_HPP_

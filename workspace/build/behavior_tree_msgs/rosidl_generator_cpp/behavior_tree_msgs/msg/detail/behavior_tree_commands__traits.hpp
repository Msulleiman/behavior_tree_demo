// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/msg/detail/behavior_tree_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'commands'
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__traits.hpp"

namespace behavior_tree_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorTreeCommands & msg,
  std::ostream & out)
{
  out << "{";
  // member: commands
  {
    if (msg.commands.size() == 0) {
      out << "commands: []";
    } else {
      out << "commands: [";
      size_t pending_items = msg.commands.size();
      for (auto item : msg.commands) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorTreeCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorTreeCommands & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::msg::BehaviorTreeCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::msg::BehaviorTreeCommands & msg)
{
  return behavior_tree_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::msg::BehaviorTreeCommands>()
{
  return "behavior_tree_msgs::msg::BehaviorTreeCommands";
}

template<>
inline const char * name<behavior_tree_msgs::msg::BehaviorTreeCommands>()
{
  return "behavior_tree_msgs/msg/BehaviorTreeCommands";
}

template<>
struct has_fixed_size<behavior_tree_msgs::msg::BehaviorTreeCommands>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::msg::BehaviorTreeCommands>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::msg::BehaviorTreeCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:msg/Active.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/msg/detail/active__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_tree_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Active & msg,
  std::ostream & out)
{
  out << "{";
  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Active & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Active & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::msg::Active & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::msg::Active & msg)
{
  return behavior_tree_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::msg::Active>()
{
  return "behavior_tree_msgs::msg::Active";
}

template<>
inline const char * name<behavior_tree_msgs::msg::Active>()
{
  return "behavior_tree_msgs/msg/Active";
}

template<>
struct has_fixed_size<behavior_tree_msgs::msg::Active>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_tree_msgs::msg::Active>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_tree_msgs::msg::Active>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'commands'
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommands __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommands __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorTreeCommands_
{
  using Type = BehaviorTreeCommands_<ContainerAllocator>;

  explicit BehaviorTreeCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BehaviorTreeCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _commands_type =
    std::vector<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__commands(
    const std::vector<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommands
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommands
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorTreeCommands_ & other) const
  {
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorTreeCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorTreeCommands_

// alias to use template instance with default allocator
using BehaviorTreeCommands =
  behavior_tree_msgs::msg::BehaviorTreeCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMANDS__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommand.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommand __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommand __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorTreeCommand_
{
  using Type = BehaviorTreeCommand_<ContainerAllocator>;

  explicit BehaviorTreeCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->condition_name = "";
      this->status = 0;
    }
  }

  explicit BehaviorTreeCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : condition_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->condition_name = "";
      this->status = 0;
    }
  }

  // field types and members
  using _condition_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _condition_name_type condition_name;
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__condition_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->condition_name = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommand
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__BehaviorTreeCommand
    std::shared_ptr<behavior_tree_msgs::msg::BehaviorTreeCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorTreeCommand_ & other) const
  {
    if (this->condition_name != other.condition_name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorTreeCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorTreeCommand_

// alias to use template instance with default allocator
using BehaviorTreeCommand =
  behavior_tree_msgs::msg::BehaviorTreeCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BEHAVIOR_TREE_COMMAND__STRUCT_HPP_

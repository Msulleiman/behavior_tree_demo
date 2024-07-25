// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/Active.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__Active __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__Active __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Active_
{
  using Type = Active_<ContainerAllocator>;

  explicit Active_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->id = 0ll;
    }
  }

  explicit Active_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->id = 0ll;
    }
  }

  // field types and members
  using _active_type =
    bool;
  _active_type active;
  using _id_type =
    int64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::Active_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::Active_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::Active_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::Active_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__Active
    std::shared_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__Active
    std::shared_ptr<behavior_tree_msgs::msg::Active_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Active_ & other) const
  {
    if (this->active != other.active) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Active_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Active_

// alias to use template instance with default allocator
using Active =
  behavior_tree_msgs::msg::Active_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__ACTIVE__STRUCT_HPP_

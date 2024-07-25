// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__Status __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->id = 0ull;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->id = 0ull;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _id_type =
    uint64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t FAILURE =
    0;
  static constexpr int8_t RUNNING =
    1;
  static constexpr int8_t SUCCESS =
    2;

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__Status
    std::shared_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__Status
    std::shared_ptr<behavior_tree_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  behavior_tree_msgs::msg::Status_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Status_<ContainerAllocator>::FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Status_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Status_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

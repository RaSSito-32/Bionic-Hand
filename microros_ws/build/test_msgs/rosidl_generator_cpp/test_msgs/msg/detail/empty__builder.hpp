// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/msg/empty.hpp"


#ifndef TEST_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_
#define TEST_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test_msgs/msg/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_msgs
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_msgs::msg::Empty>()
{
  return ::test_msgs::msg::Empty(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_

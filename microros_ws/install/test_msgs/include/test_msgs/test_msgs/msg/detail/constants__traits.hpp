// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg/Constants.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/msg/constants.hpp"


#ifndef TEST_MSGS__MSG__DETAIL__CONSTANTS__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__CONSTANTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_msgs/msg/detail/constants__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Constants & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Constants & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Constants & msg, bool use_flow_style = false)
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

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::msg::Constants & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::msg::Constants & msg)
{
  return test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::msg::Constants>()
{
  return "test_msgs::msg::Constants";
}

template<>
inline const char * name<test_msgs::msg::Constants>()
{
  return "test_msgs/msg/Constants";
}

template<>
struct has_fixed_size<test_msgs::msg::Constants>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::msg::Constants>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::msg::Constants>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__CONSTANTS__TRAITS_HPP_

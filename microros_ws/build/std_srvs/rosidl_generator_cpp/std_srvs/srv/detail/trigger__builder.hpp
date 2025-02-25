// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_srvs/srv/trigger.hpp"


#ifndef STD_SRVS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::Trigger_Request>()
{
  return ::std_srvs::srv::Trigger_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Response_message
{
public:
  explicit Init_Trigger_Response_message(::std_srvs::srv::Trigger_Response & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::Trigger_Response message(::std_srvs::srv::Trigger_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::Trigger_Response msg_;
};

class Init_Trigger_Response_success
{
public:
  Init_Trigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Response_message success(::std_srvs::srv::Trigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Trigger_Response_message(msg_);
  }

private:
  ::std_srvs::srv::Trigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::Trigger_Response>()
{
  return std_srvs::srv::builder::Init_Trigger_Response_success();
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Event_response
{
public:
  explicit Init_Trigger_Event_response(::std_srvs::srv::Trigger_Event & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::Trigger_Event response(::std_srvs::srv::Trigger_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::Trigger_Event msg_;
};

class Init_Trigger_Event_request
{
public:
  explicit Init_Trigger_Event_request(::std_srvs::srv::Trigger_Event & msg)
  : msg_(msg)
  {}
  Init_Trigger_Event_response request(::std_srvs::srv::Trigger_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Trigger_Event_response(msg_);
  }

private:
  ::std_srvs::srv::Trigger_Event msg_;
};

class Init_Trigger_Event_info
{
public:
  Init_Trigger_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Event_request info(::std_srvs::srv::Trigger_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Trigger_Event_request(msg_);
  }

private:
  ::std_srvs::srv::Trigger_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::Trigger_Event>()
{
  return std_srvs::srv::builder::Init_Trigger_Event_info();
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__TRIGGER__BUILDER_HPP_

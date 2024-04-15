// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur3e_ros_data:action/MoveL.idl
// generated code does not contain a copyright notice

#ifndef UR3E_ROS_DATA__ACTION__DETAIL__MOVE_L__BUILDER_HPP_
#define UR3E_ROS_DATA__ACTION__DETAIL__MOVE_L__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur3e_ros_data/action/detail/move_l__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_Goal_speed
{
public:
  explicit Init_MoveL_Goal_speed(::ur3e_ros_data::action::MoveL_Goal & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_Goal speed(::ur3e_ros_data::action::MoveL_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_Goal msg_;
};

class Init_MoveL_Goal_movez
{
public:
  explicit Init_MoveL_Goal_movez(::ur3e_ros_data::action::MoveL_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveL_Goal_speed movez(::ur3e_ros_data::action::MoveL_Goal::_movez_type arg)
  {
    msg_.movez = std::move(arg);
    return Init_MoveL_Goal_speed(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_Goal msg_;
};

class Init_MoveL_Goal_movey
{
public:
  explicit Init_MoveL_Goal_movey(::ur3e_ros_data::action::MoveL_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveL_Goal_movez movey(::ur3e_ros_data::action::MoveL_Goal::_movey_type arg)
  {
    msg_.movey = std::move(arg);
    return Init_MoveL_Goal_movez(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_Goal msg_;
};

class Init_MoveL_Goal_movex
{
public:
  Init_MoveL_Goal_movex()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_Goal_movey movex(::ur3e_ros_data::action::MoveL_Goal::_movex_type arg)
  {
    msg_.movex = std::move(arg);
    return Init_MoveL_Goal_movey(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_Goal>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_Goal_movex();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_Result_result
{
public:
  Init_MoveL_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur3e_ros_data::action::MoveL_Result result(::ur3e_ros_data::action::MoveL_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_Result>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_Result_result();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_Feedback_feedback
{
public:
  Init_MoveL_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur3e_ros_data::action::MoveL_Feedback feedback(::ur3e_ros_data::action::MoveL_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_Feedback>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_Feedback_feedback();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_SendGoal_Request_goal
{
public:
  explicit Init_MoveL_SendGoal_Request_goal(::ur3e_ros_data::action::MoveL_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_SendGoal_Request goal(::ur3e_ros_data::action::MoveL_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Request msg_;
};

class Init_MoveL_SendGoal_Request_goal_id
{
public:
  Init_MoveL_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_SendGoal_Request_goal goal_id(::ur3e_ros_data::action::MoveL_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveL_SendGoal_Request_goal(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_SendGoal_Request>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_SendGoal_Request_goal_id();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_SendGoal_Response_stamp
{
public:
  explicit Init_MoveL_SendGoal_Response_stamp(::ur3e_ros_data::action::MoveL_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_SendGoal_Response stamp(::ur3e_ros_data::action::MoveL_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Response msg_;
};

class Init_MoveL_SendGoal_Response_accepted
{
public:
  Init_MoveL_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_SendGoal_Response_stamp accepted(::ur3e_ros_data::action::MoveL_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveL_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_SendGoal_Response>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_SendGoal_Response_accepted();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_SendGoal_Event_response
{
public:
  explicit Init_MoveL_SendGoal_Event_response(::ur3e_ros_data::action::MoveL_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_SendGoal_Event response(::ur3e_ros_data::action::MoveL_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Event msg_;
};

class Init_MoveL_SendGoal_Event_request
{
public:
  explicit Init_MoveL_SendGoal_Event_request(::ur3e_ros_data::action::MoveL_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MoveL_SendGoal_Event_response request(::ur3e_ros_data::action::MoveL_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveL_SendGoal_Event_response(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Event msg_;
};

class Init_MoveL_SendGoal_Event_info
{
public:
  Init_MoveL_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_SendGoal_Event_request info(::ur3e_ros_data::action::MoveL_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveL_SendGoal_Event_request(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_SendGoal_Event>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_SendGoal_Event_info();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_GetResult_Request_goal_id
{
public:
  Init_MoveL_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur3e_ros_data::action::MoveL_GetResult_Request goal_id(::ur3e_ros_data::action::MoveL_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_GetResult_Request>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_GetResult_Request_goal_id();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_GetResult_Response_result
{
public:
  explicit Init_MoveL_GetResult_Response_result(::ur3e_ros_data::action::MoveL_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_GetResult_Response result(::ur3e_ros_data::action::MoveL_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_GetResult_Response msg_;
};

class Init_MoveL_GetResult_Response_status
{
public:
  Init_MoveL_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_GetResult_Response_result status(::ur3e_ros_data::action::MoveL_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveL_GetResult_Response_result(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_GetResult_Response>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_GetResult_Response_status();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_GetResult_Event_response
{
public:
  explicit Init_MoveL_GetResult_Event_response(::ur3e_ros_data::action::MoveL_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_GetResult_Event response(::ur3e_ros_data::action::MoveL_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_GetResult_Event msg_;
};

class Init_MoveL_GetResult_Event_request
{
public:
  explicit Init_MoveL_GetResult_Event_request(::ur3e_ros_data::action::MoveL_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MoveL_GetResult_Event_response request(::ur3e_ros_data::action::MoveL_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveL_GetResult_Event_response(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_GetResult_Event msg_;
};

class Init_MoveL_GetResult_Event_info
{
public:
  Init_MoveL_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_GetResult_Event_request info(::ur3e_ros_data::action::MoveL_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveL_GetResult_Event_request(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_GetResult_Event>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_GetResult_Event_info();
}

}  // namespace ur3e_ros_data


namespace ur3e_ros_data
{

namespace action
{

namespace builder
{

class Init_MoveL_FeedbackMessage_feedback
{
public:
  explicit Init_MoveL_FeedbackMessage_feedback(::ur3e_ros_data::action::MoveL_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur3e_ros_data::action::MoveL_FeedbackMessage feedback(::ur3e_ros_data::action::MoveL_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_FeedbackMessage msg_;
};

class Init_MoveL_FeedbackMessage_goal_id
{
public:
  Init_MoveL_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveL_FeedbackMessage_feedback goal_id(::ur3e_ros_data::action::MoveL_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveL_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur3e_ros_data::action::MoveL_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur3e_ros_data::action::MoveL_FeedbackMessage>()
{
  return ur3e_ros_data::action::builder::Init_MoveL_FeedbackMessage_goal_id();
}

}  // namespace ur3e_ros_data

#endif  // UR3E_ROS_DATA__ACTION__DETAIL__MOVE_L__BUILDER_HPP_

// Generated by gencpp from file nuturtle_robot/start.msg
// DO NOT EDIT!


#ifndef NUTURTLE_ROBOT_MESSAGE_START_H
#define NUTURTLE_ROBOT_MESSAGE_START_H

#include <ros/service_traits.h>


#include <nuturtle_robot/startRequest.h>
#include <nuturtle_robot/startResponse.h>


namespace nuturtle_robot
{

struct start
{

typedef startRequest Request;
typedef startResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct start
} // namespace nuturtle_robot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nuturtle_robot::start > {
  static const char* value()
  {
    return "e743aa0e8f3e06b0783c4c788c47711b";
  }

  static const char* value(const ::nuturtle_robot::start&) { return value(); }
};

template<>
struct DataType< ::nuturtle_robot::start > {
  static const char* value()
  {
    return "nuturtle_robot/start";
  }

  static const char* value(const ::nuturtle_robot::start&) { return value(); }
};


// service_traits::MD5Sum< ::nuturtle_robot::startRequest> should match
// service_traits::MD5Sum< ::nuturtle_robot::start >
template<>
struct MD5Sum< ::nuturtle_robot::startRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nuturtle_robot::start >::value();
  }
  static const char* value(const ::nuturtle_robot::startRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nuturtle_robot::startRequest> should match
// service_traits::DataType< ::nuturtle_robot::start >
template<>
struct DataType< ::nuturtle_robot::startRequest>
{
  static const char* value()
  {
    return DataType< ::nuturtle_robot::start >::value();
  }
  static const char* value(const ::nuturtle_robot::startRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nuturtle_robot::startResponse> should match
// service_traits::MD5Sum< ::nuturtle_robot::start >
template<>
struct MD5Sum< ::nuturtle_robot::startResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nuturtle_robot::start >::value();
  }
  static const char* value(const ::nuturtle_robot::startResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nuturtle_robot::startResponse> should match
// service_traits::DataType< ::nuturtle_robot::start >
template<>
struct DataType< ::nuturtle_robot::startResponse>
{
  static const char* value()
  {
    return DataType< ::nuturtle_robot::start >::value();
  }
  static const char* value(const ::nuturtle_robot::startResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NUTURTLE_ROBOT_MESSAGE_START_H

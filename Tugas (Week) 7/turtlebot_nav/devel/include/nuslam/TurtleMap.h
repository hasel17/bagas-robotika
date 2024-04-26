// Generated by gencpp from file nuslam/TurtleMap.msg
// DO NOT EDIT!


#ifndef NUSLAM_MESSAGE_TURTLEMAP_H
#define NUSLAM_MESSAGE_TURTLEMAP_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nuslam
{
template <class ContainerAllocator>
struct TurtleMap_
{
  typedef TurtleMap_<ContainerAllocator> Type;

  TurtleMap_()
    : header()
    , cx()
    , cy()
    , r()  {
    }
  TurtleMap_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cx(_alloc)
    , cy(_alloc)
    , r(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _cx_type;
  _cx_type cx;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _cy_type;
  _cy_type cy;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::nuslam::TurtleMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nuslam::TurtleMap_<ContainerAllocator> const> ConstPtr;

}; // struct TurtleMap_

typedef ::nuslam::TurtleMap_<std::allocator<void> > TurtleMap;

typedef boost::shared_ptr< ::nuslam::TurtleMap > TurtleMapPtr;
typedef boost::shared_ptr< ::nuslam::TurtleMap const> TurtleMapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nuslam::TurtleMap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nuslam::TurtleMap_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nuslam::TurtleMap_<ContainerAllocator1> & lhs, const ::nuslam::TurtleMap_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.cx == rhs.cx &&
    lhs.cy == rhs.cy &&
    lhs.r == rhs.r;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nuslam::TurtleMap_<ContainerAllocator1> & lhs, const ::nuslam::TurtleMap_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nuslam

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nuslam::TurtleMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nuslam::TurtleMap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nuslam::TurtleMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nuslam::TurtleMap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nuslam::TurtleMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nuslam::TurtleMap_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nuslam::TurtleMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d40027dbb6d72b6b7d7e7a1e02116dc";
  }

  static const char* value(const ::nuslam::TurtleMap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d40027dbb6d72b6ULL;
  static const uint64_t static_value2 = 0xb7d7e7a1e02116dcULL;
};

template<class ContainerAllocator>
struct DataType< ::nuslam::TurtleMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nuslam/TurtleMap";
  }

  static const char* value(const ::nuslam::TurtleMap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nuslam::TurtleMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# feature map\n"
"# header \n"
"Header header\n"
"# circle x position of center\n"
"float64[] cx\n"
"# circle y position of center\n"
"float64[] cy\n"
"# circle radius\n"
"float64[] r\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::nuslam::TurtleMap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nuslam::TurtleMap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cx);
      stream.next(m.cy);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurtleMap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nuslam::TurtleMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nuslam::TurtleMap_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cx[]" << std::endl;
    for (size_t i = 0; i < v.cx.size(); ++i)
    {
      s << indent << "  cx[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cx[i]);
    }
    s << indent << "cy[]" << std::endl;
    for (size_t i = 0; i < v.cy.size(); ++i)
    {
      s << indent << "  cy[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cy[i]);
    }
    s << indent << "r[]" << std::endl;
    for (size_t i = 0; i < v.r.size(); ++i)
    {
      s << indent << "  r[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.r[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUSLAM_MESSAGE_TURTLEMAP_H
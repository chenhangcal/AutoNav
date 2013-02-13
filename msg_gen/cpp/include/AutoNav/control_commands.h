/* Auto-generated by genmsg_cpp for file /home/dev/ros/stacks/AutoNav/msg/control_commands.msg */
#ifndef AUTONAV_MESSAGE_CONTROL_COMMANDS_H
#define AUTONAV_MESSAGE_CONTROL_COMMANDS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace AutoNav
{
template <class ContainerAllocator>
struct control_commands_ {
  typedef control_commands_<ContainerAllocator> Type;

  control_commands_()
  : error_x(0.0)
  , error_y(0.0)
  , error_z(0.0)
  , error_yaw(0.0)
  , d_error_x(0.0)
  , d_error_y(0.0)
  , d_error_z(0.0)
  , d_error_yaw(0.0)
  , proj_error_x(0.0)
  , proj_error_y(0.0)
  , pterm_x(0.0)
  , pterm_y(0.0)
  , pterm_z(0.0)
  , pterm_yaw(0.0)
  , dterm_x(0.0)
  , dterm_y(0.0)
  , dterm_z(0.0)
  , dterm_yaw(0.0)
  , vel_x(0.0)
  , vel_y(0.0)
  , vel_z(0.0)
  , vel_yaw(0.0)
  {
  }

  control_commands_(const ContainerAllocator& _alloc)
  : error_x(0.0)
  , error_y(0.0)
  , error_z(0.0)
  , error_yaw(0.0)
  , d_error_x(0.0)
  , d_error_y(0.0)
  , d_error_z(0.0)
  , d_error_yaw(0.0)
  , proj_error_x(0.0)
  , proj_error_y(0.0)
  , pterm_x(0.0)
  , pterm_y(0.0)
  , pterm_z(0.0)
  , pterm_yaw(0.0)
  , dterm_x(0.0)
  , dterm_y(0.0)
  , dterm_z(0.0)
  , dterm_yaw(0.0)
  , vel_x(0.0)
  , vel_y(0.0)
  , vel_z(0.0)
  , vel_yaw(0.0)
  {
  }

  typedef float _error_x_type;
  float error_x;

  typedef float _error_y_type;
  float error_y;

  typedef float _error_z_type;
  float error_z;

  typedef float _error_yaw_type;
  float error_yaw;

  typedef float _d_error_x_type;
  float d_error_x;

  typedef float _d_error_y_type;
  float d_error_y;

  typedef float _d_error_z_type;
  float d_error_z;

  typedef float _d_error_yaw_type;
  float d_error_yaw;

  typedef float _proj_error_x_type;
  float proj_error_x;

  typedef float _proj_error_y_type;
  float proj_error_y;

  typedef float _pterm_x_type;
  float pterm_x;

  typedef float _pterm_y_type;
  float pterm_y;

  typedef float _pterm_z_type;
  float pterm_z;

  typedef float _pterm_yaw_type;
  float pterm_yaw;

  typedef float _dterm_x_type;
  float dterm_x;

  typedef float _dterm_y_type;
  float dterm_y;

  typedef float _dterm_z_type;
  float dterm_z;

  typedef float _dterm_yaw_type;
  float dterm_yaw;

  typedef float _vel_x_type;
  float vel_x;

  typedef float _vel_y_type;
  float vel_y;

  typedef float _vel_z_type;
  float vel_z;

  typedef float _vel_yaw_type;
  float vel_yaw;


  typedef boost::shared_ptr< ::AutoNav::control_commands_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AutoNav::control_commands_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct control_commands
typedef  ::AutoNav::control_commands_<std::allocator<void> > control_commands;

typedef boost::shared_ptr< ::AutoNav::control_commands> control_commandsPtr;
typedef boost::shared_ptr< ::AutoNav::control_commands const> control_commandsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::AutoNav::control_commands_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::AutoNav::control_commands_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace AutoNav

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::AutoNav::control_commands_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::AutoNav::control_commands_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::AutoNav::control_commands_<ContainerAllocator> > {
  static const char* value() 
  {
    return "89daaa5cf29061dcd0b2da457fee8393";
  }

  static const char* value(const  ::AutoNav::control_commands_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x89daaa5cf29061dcULL;
  static const uint64_t static_value2 = 0xd0b2da457fee8393ULL;
};

template<class ContainerAllocator>
struct DataType< ::AutoNav::control_commands_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AutoNav/control_commands";
  }

  static const char* value(const  ::AutoNav::control_commands_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AutoNav::control_commands_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
float32 error_x\n\
float32 error_y\n\
float32 error_z\n\
float32 error_yaw\n\
\n\
float32 d_error_x\n\
float32 d_error_y\n\
float32 d_error_z\n\
float32 d_error_yaw\n\
\n\
float32 proj_error_x\n\
float32 proj_error_y\n\
\n\
float32 pterm_x\n\
float32 pterm_y\n\
float32 pterm_z\n\
float32 pterm_yaw\n\
\n\
float32 dterm_x\n\
float32 dterm_y\n\
float32 dterm_z\n\
float32 dterm_yaw\n\
\n\
float32 vel_x\n\
float32 vel_y\n\
float32 vel_z\n\
float32 vel_yaw\n\
";
  }

  static const char* value(const  ::AutoNav::control_commands_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::AutoNav::control_commands_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AutoNav::control_commands_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.error_x);
    stream.next(m.error_y);
    stream.next(m.error_z);
    stream.next(m.error_yaw);
    stream.next(m.d_error_x);
    stream.next(m.d_error_y);
    stream.next(m.d_error_z);
    stream.next(m.d_error_yaw);
    stream.next(m.proj_error_x);
    stream.next(m.proj_error_y);
    stream.next(m.pterm_x);
    stream.next(m.pterm_y);
    stream.next(m.pterm_z);
    stream.next(m.pterm_yaw);
    stream.next(m.dterm_x);
    stream.next(m.dterm_y);
    stream.next(m.dterm_z);
    stream.next(m.dterm_yaw);
    stream.next(m.vel_x);
    stream.next(m.vel_y);
    stream.next(m.vel_z);
    stream.next(m.vel_yaw);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct control_commands_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::AutoNav::control_commands_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::AutoNav::control_commands_<ContainerAllocator> & v) 
  {
    s << indent << "error_x: ";
    Printer<float>::stream(s, indent + "  ", v.error_x);
    s << indent << "error_y: ";
    Printer<float>::stream(s, indent + "  ", v.error_y);
    s << indent << "error_z: ";
    Printer<float>::stream(s, indent + "  ", v.error_z);
    s << indent << "error_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.error_yaw);
    s << indent << "d_error_x: ";
    Printer<float>::stream(s, indent + "  ", v.d_error_x);
    s << indent << "d_error_y: ";
    Printer<float>::stream(s, indent + "  ", v.d_error_y);
    s << indent << "d_error_z: ";
    Printer<float>::stream(s, indent + "  ", v.d_error_z);
    s << indent << "d_error_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.d_error_yaw);
    s << indent << "proj_error_x: ";
    Printer<float>::stream(s, indent + "  ", v.proj_error_x);
    s << indent << "proj_error_y: ";
    Printer<float>::stream(s, indent + "  ", v.proj_error_y);
    s << indent << "pterm_x: ";
    Printer<float>::stream(s, indent + "  ", v.pterm_x);
    s << indent << "pterm_y: ";
    Printer<float>::stream(s, indent + "  ", v.pterm_y);
    s << indent << "pterm_z: ";
    Printer<float>::stream(s, indent + "  ", v.pterm_z);
    s << indent << "pterm_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.pterm_yaw);
    s << indent << "dterm_x: ";
    Printer<float>::stream(s, indent + "  ", v.dterm_x);
    s << indent << "dterm_y: ";
    Printer<float>::stream(s, indent + "  ", v.dterm_y);
    s << indent << "dterm_z: ";
    Printer<float>::stream(s, indent + "  ", v.dterm_z);
    s << indent << "dterm_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.dterm_yaw);
    s << indent << "vel_x: ";
    Printer<float>::stream(s, indent + "  ", v.vel_x);
    s << indent << "vel_y: ";
    Printer<float>::stream(s, indent + "  ", v.vel_y);
    s << indent << "vel_z: ";
    Printer<float>::stream(s, indent + "  ", v.vel_z);
    s << indent << "vel_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.vel_yaw);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAV_MESSAGE_CONTROL_COMMANDS_H


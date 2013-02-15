#pragma once

#include <ros/ros.h>
#include "../HelperFunction.h"
#include <geometry_msgs/Twist.h>
//#include <std_msgs/Empty>
#include <Eigen/Core>
#include <Eigen/LU>
#include <AutoNav/filter_state.h>
#include <string>
#include"AutoNav/control_commands.h"
#include <cmath>

typedef Eigen::Matrix<float,4,1> Vector4f;

class DroneController
{
 private:
  float Kp_xy;
  float Kd_xy;
  float Ki_xy;
  float Kp_gaz;
  float Kd_gaz;
  float Ki_gaz;
  float Kp_yaw;
  float Kd_yaw;

  float err_xy;
  float err_z;
  float err_yaw;

  float rise_fac;

  Vector4f init_state;
  bool inited;

  ros::NodeHandle nh;

  ros::Publisher cmd_pub;
  ros::Subscriber state_pub;

  ros::Publisher pub_control_commands;

  std::string velocity_channel;
  std::string state_channel;
  std::string control_commands_channel;

 public:
  DroneController();
  void Loop();
  void calcControl(Vector4f error,Vector4f d_error,double yaw);
  void stateCB(const AutoNav::filter_stateConstPtr state);
};
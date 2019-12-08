#include "ros/ros.h"
#include <iostream>
#include "sensor_msgs/JointState.h"

using namespace std;

void stateCallback(const sensor_msgs::JointState& msg)
{
}

int main(int argc, char **argv)
{
  //initialize node
  ros::init(argc, argv, "subscribe_robot");

  // node handler
  ros::NodeHandle n;

  // subsribe topic
  ros::Subscriber sub = n.subscribe("/joint_states", 1000, stateCallback);

  ros::spin();

  return 0;
}

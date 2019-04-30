#include <ros/ros.h>
#include "loam_velodyne/LaserOdometry.h"
#include <ctime>
#include <iostream>
using namespace std;


/** Main node entry point. */
int main(int argc, char **argv)
{
  time_t odometry_start_time;
  odometry_start_time = time(NULL);

  ros::init(argc, argv, "laserOdometry");
  ros::NodeHandle node;
  ros::NodeHandle privateNode("~");

  loam::LaserOdometry laserOdom(0.1);

  if (laserOdom.setup(node, privateNode)) {
    // initialization successful
    laserOdom.spin();
  }

  time_t odometry_end_time;
  odometry_end_time = time(NULL);
  cout << "odometry time: " << odometry_end_time - odometry_start_time << endl;

  return 0;
}

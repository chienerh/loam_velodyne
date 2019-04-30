#include <ros/ros.h>
#include "loam_velodyne/LaserMapping.h"
#include <ctime>
#include <iostream>
using namespace std;



/** Main node entry point. */
int main(int argc, char **argv)
{
  time_t mapping_start_time;
  mapping_start_time = time(NULL);

  ros::init(argc, argv, "laserMapping");
  ros::NodeHandle node;
  ros::NodeHandle privateNode("~");

  loam::LaserMapping laserMapping(0.1);

  if (laserMapping.setup(node, privateNode)) {
    // initialization successful
    laserMapping.spin();
  }

  time_t mapping_end_time;
  mapping_end_time = time(NULL);
  cout << "mapping time: " << mapping_end_time - mapping_start_time << endl;

  return 0;
}

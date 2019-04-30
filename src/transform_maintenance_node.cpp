#include <ros/ros.h>
#include "loam_velodyne/TransformMaintenance.h"
#include <ctime>
#include <iostream>
using namespace std;


/** Main node entry point. */
int main(int argc, char **argv)
{
  time_t scan_start_time;
  scan_start_time = time(NULL);

  ros::init(argc, argv, "transformMaintenance");
  ros::NodeHandle node;
  ros::NodeHandle privateNode("~");

  loam::TransformMaintenance transMaintenance;

  if (transMaintenance.setup(node, privateNode)) {
    // initialization successful
    ros::spin();
  }

  time_t scan_end_time;
  scan_end_time = time(NULL);
  cout << "scan time: " << scan_end_time - scan_start_time << endl;


  return 0;
}

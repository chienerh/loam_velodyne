#include <ros/ros.h>
#include "loam_velodyne/MultiScanRegistration.h"
#include <ctime>
#include <iostream>
using namespace std;



/** Main node entry point. */
int main(int argc, char **argv)
{
  time_t scan_start_time;
  scan_start_time = time(NULL);

  ros::init(argc, argv, "scanRegistration");
  ros::NodeHandle node;
  ros::NodeHandle privateNode("~");

  loam::MultiScanRegistration multiScan;

  if (multiScan.setup(node, privateNode)) {
    // initialization successful
    ros::spin();
  }

  time_t scan_end_time;
  scan_end_time = time(NULL);
  cout << "scan time: " << scan_end_time - scan_start_time << endl;

  return 0;
}

# LOAM test with KITTI data

This repository is fork from [laboshinl's version of LOAM](https://github.com/laboshinl/loam_velodyne). I changed it to be able to run kitti dataset.

## How to download and transform kitti to rosbag
- Download raw sequences **synced+rectified data** and **calibration** data from [The KITTI Vision Benchmark Suite](http://www.cvlibs.net/datasets/kitti/raw_data.php).
- [kitti2bag](https://github.com/tomas789/kitti2bag) is used to transform kitti raw data to rosbag.
- 

The sequences that provide ground truth are shown in the below table. The [odometry eval kit](http://kitti.is.tue.mpg.de/kitti/devkit_odometry.zip) includes description.

The following table lists the name, start and end frame of each sequence that
has been used to extract the visual odometry / SLAM training set

| Seq |Sequence name |Start | End | Category | Size |
| --- | --- | --- | --- | --- | --- |
| 00 | 2011_10_03_drive_0027 | 000000 | 004540 | Residential | 17.6 GB |
| 01 | 2011_10_03_drive_0042 | 000000 | 001100 | Road | 4.5 GB |
| 02 | 2011_10_03_drive_0034 | 000000 | 004660 |
| 03 | 2011_09_26_drive_0067 | 000000 | 000800 | 
| 04 | 2011_09_30_drive_0016 | 000000 | 000270 | Road | 1.1 GB |
| 05 | 2011_09_30_drive_0018 | 000000 | 002760 | Residential | 10.7 GB |
| 06 | 2011_09_30_drive_0020 | 000000 | 001100 | Residential | 4.3 GB |
| 07 | 2011_09_30_drive_0027 | 000000 | 001100 | Residential | 4.3 GB |
| 08 | 2011_09_30_drive_0028 | 001100 | 005170 | Residential | 20.0 GB |
| 09 | 2011_09_30_drive_0033 | 000000 | 001590 | Residential | 6.2 GB |
| 10 | 2011_09_30_drive_0034 | 000000 | 001200 | Residential | 4.8 GB |

## How to use kitti rosbag in LOAM

## KAIST Dataset
- Use [File Player](https://github.com/irapkaist/file_player) to transform KAIST data into rosbag.



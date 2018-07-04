#include<string>
#include"ros/ros.h"
#include"std_msgs/String.h"
#include"nav_msgs/OccupancyGrid.h"
#include"nav_msgs/MapMetaData.h"


//##########################################################
//                         CALLBACK FUNCTION
//##########################################################
void chatterCallback(const nav_msgs::OccupancyGrid::Ptr map)
{
	ROS_INFO("The size of map is [%d]",(int)(map->data.size()));
	ROS_INFO("The height of map is [%d]",(map->info.height));
	ROS_INFO("The width of map is [%d]",(map->info.width));
	ROS_INFO("The resolution of map is [%f]",(map->info.resolution));
}



//##########################################################
//                          TESTNODE
//##########################################################
int main(int argc,char** argv)
{
	ros::init(argc,argv,"testnode");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("/map",1,chatterCallback);
	ros::spin();
	return 0;
}

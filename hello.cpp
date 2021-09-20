#include <ros/ros.h>
#include <std_msgs/Int32.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "test_include_library");
    ros::NodeHandle nh;

    int count = 0;

    while(count < 3){
        ROS_INFO("Hello");
        count++;
        sleep(1);
    }
}
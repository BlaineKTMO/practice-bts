/**
 * There is a predefined movement header in ROS/Some other package so this name is 
 * movement_client.h
*/
#ifndef MOVEMENT_H
#define MOVEMENT_H

#include "ros/ros.h"

class Movement {
    private:
        ros::Publisher drivePub;
        ros::Subscriber scanSub;
        ros::Subscriber tfSub;
        ros::NodeHandle &n;
     
    public:
        Movement(ros::NodeHandle &n) : n(n)
         {}
        void setDrivePub(ros::Publisher drivePub);

        bool drive();
        bool turn(double yaw);
        bool checkCollision();
};

#endif
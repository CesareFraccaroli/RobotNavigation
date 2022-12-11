#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <Maze.h>
#include <coordinate.h>

class Robot{

    class faces{
    private:
        char up;
        char down;
        char left;
        char right;
    public:
        faces() : up{' '},down{' '},left{' '},right{' '}{}; 
        faces(Maze m);

};
    Robot(); 
    Robot(Maze& m); 
    virtual bool move(Maze& m);
    void setRobotCP(coordinate pair);
    coordinate getRobotCP();
private:
    coordinate RobotCP; //robot current position
    faces f;
};
#endif //RIGHTHANDRULEROBOT_H
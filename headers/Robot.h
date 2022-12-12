#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <Maze.h>

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
    void setRobotCP(Maze::coordinate pair);
    Maze::coordinate getRobotCP();
private:
    Maze::coordinate RobotCP; //robot current position
    faces f;
};
#endif //RIGHTHANDRULEROBOT_H
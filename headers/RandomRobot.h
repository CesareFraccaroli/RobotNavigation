#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H
#include <iostream>
#include <Robot.h>
#include <Maze.h>
#include <coordinate.h>
class RandomRobot:public Robot{
    RandomRobot();
    RandomRobot(Maze& m);
    bool move(Maze& m);
    
};
#endif //RANDOMROBOT_H
#ifndef MAZE_H
#define MAZE_H

#include<iostream>
#include<coordinate.h>
#include<fstream>
#include<string>
#include<vector>


    
class Maze{
public:

    /*class coordinate
    {
    private:
        int row,column;
    public:
        coordinate(): row{0},column{0}{};
        coordinate(int a,int b): row{a},column{b}{};
        int getrow(){return row;}
        int getcolumn(){return column;}
        void setrow(int a){row=a;}
        void setcolumn(int b){column=b;}
        coordinate& operator = (coordinate& pair1);
        bool operator== (coordinate& pair1);
    };*/


    class InvalidMove{};
	Maze();
	Maze(const std::string filename);
	bool IsValid();
	bool FileIsValid(std::ifstream file);
	bool GoUp();
	bool GoLeft();
	bool GoRight();
	bool GoDown();
	char getElement(int i, int j);
    char getElement(coordinate pair);
    void setElement(coordinate pos,char elem);
    void setElement(int a, int b,char elem);

    coordinate getExit();
    bool isWin();
    coordinate getCurrentPosition();
private:
	char matrix[9][9];
	coordinate ExitCoordinates;
	coordinate CP; //CurrentPosition
    int movecounter=0;
};
std::ostream& operator <<(std::ostream& os, Maze m);
#endif //MAZE_H
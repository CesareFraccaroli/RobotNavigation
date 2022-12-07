#ifndef MAZE_H
#define MAZE_H

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

struct coordinate
    {
    private:
        int x,y;
    public:
        coordinate(): x{0},y{0}{};
        coordinate(int a,int b): x{a},y{b}{};
        int getrow(){return x;}
        int getcolumn(){return y;}
        void setrow(int a){x=a;}
        void setcolumn(int b){y=b;}
    };
    
class Maze{
public:

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
	//std::vector<std::vector<char>> matrix;
	char matrix[9][9];
	coordinate ExitCoordinates;
	coordinate CP; //CurrentPosition
    int movecounter=0;
};
std::ostream& operator <<(std::ostream& os, Maze m);
#endif //MAZE_H
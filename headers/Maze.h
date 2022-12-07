#ifndef MAZE_H
#define MAZE_H

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

class Maze{
public:
	Maze();
	Maze(std::ifstream file);
	std::vector<std::vector<int>> getExit();
	bool IsValid(Maze m);
	bool FileIsValid(std::ifstream file);
	bool GoUp();
	bool GoLeft();
	bool GoRight();
	bool GoDown();
	char getElement(int i, int j);
private:
	//std::vector<std::vector<char>> matrix;
	char matrix[9][9];
	int ExitCoordinates[2];
	int CurrentPosition[2];
};

std::ostream& operator <<(std::ostream& os, Maze m);
#endif //MAZE_H
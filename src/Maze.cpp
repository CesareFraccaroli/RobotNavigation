#include "Maze.h"

Maze::Maze()
{
	//matrix=std::vector<std::vector<char>> (9,std::vector<char>(9));
	for(unsigned i=0; i<9; i++)
	{
		for(unsigned j=0; j<9; j++)
		{
			matrix[i][j]='*';
		}
	}
}

char Maze:: getElement(int i,int j)
{
	return matrix[i][j];
}

std::ostream& operator <<(std::ostream& os,Maze m)
{
	for(unsigned i=0; i<9; i++)
	{
		for(unsigned j=0; j<9; j++)
		{
			os<<m.getElement(i,j);
		}
		os<<std::endl;
	}
	return os;
}

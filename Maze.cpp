#include "Maze.h"

Maze::Maze()
{
	for(unsigned i=0; i<9; i++)
	{
		for(unsigned j=0; j<9; j++)
		{
			matrix[i][j]='*';
		}
	}
}
Maze::Maze(const std::string filename)
{
    std::ifstream file("MazeFile.txt");
    if(!file.is_open()) 
       std::cout<<"Error opening file"<<std::endl;
    for(unsigned i = 0; i < 9; i++)
    {
            file.getline(matrix[i],10);
    }
    file.close();
    for(unsigned i = 0; i < 9; i++)
    {
        for(unsigned j = 0; j < 9; j++)
        {
            if(getElement(i,j)=='S')
            {
                CP.setrow(i);
                CP.setcolumn(j);
            }
        }
    }
}

char Maze:: getElement(int i,int j)
{
	return matrix[i][j];
}
bool Maze::IsValid()
{
    bool checkExit=false;
    bool checkStart=false;
    for(unsigned i = 0; i < 9; i++)
    {
        for(unsigned j = 0; j < 9; j++)
        {
            if(matrix[i][j]=='E')
                checkExit=true;
            if(matrix[i][j]=='S')
                checkStart=true;
        }
    }
    if(checkExit&&checkStart)
        return true;
    else
        return false;
}
char Maze::getElement(coordinate pair)
{
    return getElement(pair.getrow(),pair.getcolumn());
}
void Maze::setElement(coordinate pos,const char elem)
{
    matrix[pos.getrow()][pos.getcolumn()]=elem;
}
void Maze::setElement(const int i,const int j,const char elem)
{
    matrix[i][j]=elem;
}
bool Maze::GoDown()
{
if(matrix[CP.getrow()+1][CP.getcolumn()]=='*'||CP.getrow()==8)
    {
        return false;
    }else
    {
        CP.setrow(CP.getrow()+1);
        movecounter++;
        setElement(CP,'x');
        return true;
    }
}
bool Maze::GoUp()
{
    if(getElement(CP.getrow()-1,CP.getcolumn())=='*'||CP.getrow()==0)
    {
        return false;
    }
    else
    {
        CP.setrow(CP.getrow()-1);
        movecounter++;
        setElement(CP,'x');
        return true;
    
    }
}
bool Maze::GoLeft()
{
    if(getElement(CP.getrow()-1,CP.getcolumn())=='*'||CP.getcolumn()==0)
    {
        return false;
    }
    else
    {
        CP.setcolumn(CP.getcolumn()-1);
        movecounter++;   
        setElement(CP,'x');
        return true;
    
    }
}
bool Maze::GoRight()
{
    if(matrix[CP.getrow()][CP.getcolumn()+1]=='*'||CP.getcolumn()==8)
    {
        std::cout<<"errore\n";
        return false;
    }
    else
    {
        CP.setcolumn(CP.getcolumn()+1);
        movecounter++;
        setElement(CP,'x');
        return true;
    }
    
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

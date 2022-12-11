#include <iostream>
#include <Maze.h>
using namespace std;
int main()
{
	Maze m("MazeFile.txt");
	m.GoDown();
    cout<<m<<endl;
    m.GoRight();
    cout<<m<<endl;
    m.GoDown();
    cout<<m<<endl;
        
    /*m.GoRight();
    cout<<m<<endl;
    m.GoDown();
    cout<<m<<endl;
    m.GoDown();
    cout<<m<<endl;
    m.GoLeft();
    cout<<m<<endl;*/
    
	return 0;
}

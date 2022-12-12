#include <Robot.h>

Robot::Robot()
{
    Maze::coordinate a(0,0);
    RobotCP=a;
}
Robot::Robot(Maze& m)
{
    setRobotCP(m.getCurrentPosition());
}
bool Robot::move(Maze& m)
{
    return false;
}
void Robot::setRobotCP(Maze::coordinate pair)
{
    RobotCP=pair;
}
Maze::coordinate Robot::getRobotCP()
{
    return RobotCP;
}
Robot::faces::faces(Maze m)
{
    if(m.getCurrentPosition().getrow()!=0)
    {
        //la faccia superiore e' a contatto con il char alle coordinate currentposition(row+1,column)
        up=m.getElement(m.getCurrentPosition().getrow()+1,m.getCurrentPosition().getcolumn());
    }else
        up='/';
    if(m.getCurrentPosition().getrow()!=8)
    {
        //la faccia inferiore e' a contatto con il char alle coordinate currentposition(row-1,column)
        down=m.getElement(m.getCurrentPosition().getrow()-1,m.getCurrentPosition().getcolumn());
    }else
        down='/';
    if(m.getCurrentPosition().getcolumn()!=0)
    {
        //la faccia sinistra e' a contatto con il char alle coordinate currentposition(row,column-1)
        left=m.getElement(m.getCurrentPosition().getrow(),m.getCurrentPosition().getcolumn()-1);
    }else
        left='/';
    
    if(m.getCurrentPosition().getcolumn()!=8)
    {
        //la faccia destra e' a contatto con il char alle coordinate currentposition(row,column+1)
        right=m.getElement(m.getCurrentPosition().getrow(),m.getCurrentPosition().getcolumn()+1);
    }else
        right='/';
}
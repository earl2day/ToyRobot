#include "TableTop.h"

TableTop::TableTop(int xunit, int yunit)
 : m_xunit(xunit), m_yunit(yunit)
{
}

TableTop::~TableTop()
{
}

bool TableTop::Add(Robot& robot)
{
  m_robot_list.push_back(robot);
}

bool TableTop::MoveRobot(int robotNum)
{
 m_robot_list[robotNum+1].Move();
 return true;
}

bool TableTop::LeftRobot(int robotNum)
{
 m_robot_list[robotNum+1].Left();
 return true;
}

bool TableTop::RightRobot(int robotNum)
{
 m_robot_list[robotNum+1].Right();
 return true;
}

bool TableTop::ReportRobot(int robotNum)
{
 m_robot_list[robotNum+1].Report();
 return true;
}

#include "TableTop.h"

TableTop::TableTop(int xunit, int yunit)
 : m_xunit(xunit), m_yunit(yunit)
{
}

TableTop::~TableTop()
{
}

void TableTop::Add(Robot* robot)
{
  m_robot=robot;
}

void TableTop::RobotMove(void)
{
 m_robot->Move(m_xunit,m_yunit);
}

void TableTop::RobotLeft()
{
 m_robot->Left();
}

void TableTop::RobotRight(void)
{
 m_robot->Right();
}

void TableTop::RobotReport(void)
{
 m_robot->Report();
}

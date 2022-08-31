#include "Robot.h"

Robot::Robot()
{
}

Robot::~Robot()
{
}

void Robot::Add(UserInput& input)
{
 m_ObjInput=input;
}

bool Robot::Move()
{ 
 return true;
}

bool Robot::SetXPos(int xPos)
{
 return true;
}

bool Robot::SetYPos(int yPos)
{
 return true;
}

bool Robot::SetDirection(char chDir)
{
 return true;
}

bool Robot::GetReport()
{
 return true;
}

#include <iostream>
#include "Robot.h"

Robot::Robot()
{
}

Robot::~Robot()
{
}

void Robot::Add(UserInput* input)
{
 m_ObjInput=input;
}

char Robot::GetDirection()
{
 return m_ObjInput->GetDirection();
}

void Robot::Move(int xlimit, int ylimit)
{
 switch(m_ObjInput->GetDirection())
 {
   case 'N': (m_ObjInput->GetYPosition()<ylimit)?IncYPos():Error("NORTH move error!"); break;
   case 'S': (m_ObjInput->GetYPosition()>0)?DecYPos():Error("SOUTH move error!"); break;
   case 'W': (m_ObjInput->GetXPosition()>0)?DecXPos():Error("WEST move error!"); break;
   case 'E': (m_ObjInput->GetXPosition()<xlimit)?IncXPos():Error("EAST move error!"); break; 
 }
}

void Robot::Error(std::string message)
{
 std::cout << message << std::endl;
}

void Robot::Left(void)
{
 switch(m_ObjInput->GetDirection())
 {
  case 'N': m_ObjInput->SetDirection('W');
  case 'S': m_ObjInput->SetDirection('E');
  case 'W': m_ObjInput->SetDirection('S');
  case 'E': m_ObjInput->SetDirection('N');
 }
}

void Robot::Right(void)
{
 switch(m_ObjInput->GetDirection())
 {
  case 'N': m_ObjInput->SetDirection('E');
  case 'S': m_ObjInput->SetDirection('W');
  case 'W': m_ObjInput->SetDirection('N');
  case 'E': m_ObjInput->SetDirection('S');
 }
}
void Robot::Report(void)
{
 std::string direction;
 switch(m_ObjInput->GetDirection())
 {
  case 'N': direction="NORTH"; break;
  case 'S': direction="SOUTH"; break;
  case 'W': direction="WEST"; break;
  case 'E': direction="EAST"; break;
 }

 std::cout << "\nOutput: " << m_ObjInput->GetXPosition() << "," << m_ObjInput->GetYPosition() << direction << std::endl;
}

void Robot::IncXPos(void)
{
 m_ObjInput->IncXPos();
}

void Robot::IncYPos(void)
{
 m_ObjInput->IncYPos();
}

void Robot::DecXPos(void)
{
 m_ObjInput->DecXPos();
}

void Robot::DecYPos(void)
{
 m_ObjInput->DecYPos();
}


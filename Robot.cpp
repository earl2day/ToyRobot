/*
Author: Earl Rex Arao-arao
Email : earl2day@gmail.com
*/

#include <iostream>
#include "Robot.h"

Robot::Robot(TableTop* table)
 :m_tableTop(table)
{
}

Robot::~Robot()
{
}

void Robot::Place(UserInput* input)
{
 m_ObjInput=input;
}

char Robot::GetDirection()
{
 return m_ObjInput->GetDirection();
}

void Robot::Move()
{
 switch(m_ObjInput->GetDirection())
 {
   case 'N': m_ObjInput->GetYPosition()<m_tableTop->GetYSize()?IncYPos():Error("NORTH move error!"); break;
   case 'S': m_ObjInput->GetYPosition()>0?DecYPos():Error("SOUTH move error!"); break;
   case 'W': m_ObjInput->GetXPosition()>0?DecXPos():Error("WEST move error!"); break;
   case 'E': m_ObjInput->GetXPosition()<m_tableTop->GetXSize()?IncXPos():Error("EAST move error!"); break; 
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
  case 'N': m_ObjInput->SetDirection('W'); break;
  case 'S': m_ObjInput->SetDirection('E'); break;
  case 'W': m_ObjInput->SetDirection('S'); break;
  case 'E': m_ObjInput->SetDirection('N'); break;
 }
}

void Robot::Right(void)
{
 switch(m_ObjInput->GetDirection())
 {
  case 'N': m_ObjInput->SetDirection('E'); break;
  case 'S': m_ObjInput->SetDirection('W'); break;
  case 'W': m_ObjInput->SetDirection('N'); break;
  case 'E': m_ObjInput->SetDirection('S'); break;
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

 std::cout << "Output: " << m_ObjInput->GetXPosition() << "," << m_ObjInput->GetYPosition() << "," << direction << std::endl;
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


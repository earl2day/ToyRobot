/*
Author: Earl Rex Arao-arao
Email : earl2day@gmail.com
*/

#include <iostream>
#include "UserInput.h"

UserInput::UserInput()
{
  m_strUserInput="";
  m_chCmd='0';
}

UserInput::~UserInput()
{
}

void UserInput::GetInput(void)
{
  m_ObjToken.clear();
  std::getline(std::cin,m_strUserInput);
  Parse(m_strUserInput);
}

char UserInput::GetCommand()
{
 if(m_ObjToken[0]=="PLACE") 
  {
   m_chCmd='P';
   m_iXPos = atoi(m_ObjToken[1].c_str());
   m_iYPos = atoi(m_ObjToken[2].c_str());

   if(m_ObjToken[3]=="NORTH") m_chDir='N';
   else if(m_ObjToken[3]=="WEST") m_chDir='W';
   else if(m_ObjToken[3]=="EAST") m_chDir='E';
   else if(m_ObjToken[3]=="SOUTH") m_chDir='S';
   else m_chDir='0';
  }
  else if(m_ObjToken[0]=="MOVE") m_chCmd='M';
  else if(m_ObjToken[0]=="LEFT") m_chCmd='L';
  else if(m_ObjToken[0]=="RIGHT") m_chCmd='R';
  else if(m_ObjToken[0]=="REPORT") m_chCmd='O';
  else if(m_ObjToken[0]=="EXIT") m_chCmd='X';
  else m_chCmd='0';

  return m_chCmd;
}

bool UserInput::Parse(std::string input)
{
  int startSub=0, endSub=0; 
  for(int index=0; index<input.size(); index++)
  {
    if(index>0 && ((input[index]==' ' && input[index-1]!=' ') || (input[index]==',' && input[index-1]!=',')))
    {
      m_ObjToken.push_back(input.substr(startSub,index-startSub));
      startSub=index+1;
    }
  }

  m_ObjToken.push_back(input.substr(startSub,input.size()));

  return true;
}

int UserInput::GetXPosition()
{
 return m_iXPos;
}

int UserInput::GetYPosition()
{
 return m_iYPos;
}

char UserInput::GetDirection()
{
 return m_chDir;
}

void UserInput::SetYPosition(int yPos)
{
 m_iYPos=yPos;
}

void UserInput::SetXPosition(int xPos)
{
 m_iXPos=xPos;
}

void UserInput::SetDirection(char chDir)
{
 m_chDir=chDir;
}

void UserInput::IncXPos(void)
{
 m_iXPos++;
}
void UserInput::IncYPos(void)
{
  m_iYPos++;
}
void UserInput::DecXPos(void)
{
 m_iXPos--;
}

void UserInput::DecYPos(void)
{
 m_iYPos--;
}

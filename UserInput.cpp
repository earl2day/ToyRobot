#include <iostream>
#include "UserInput.h"

UserInput::UserInput()
{
  for (;;)
  {
      std::cout << "Please enter table horizontal and vertical size Example: 10 10" << std::endl;
      std::cin >> m_iRow >> m_iCol;
      if (m_iRow < 0 || m_iCol < 0) { m_iRow = -1; m_iCol = -1; continue; }
      else break;
  }
}

UserInput::~UserInput()
{
}

void UserInput::GetInput(void)
{
  std::string line;
  m_ObjToken.clear();
  std::getline(std::cin,line);
  Parse(line);
}

int UserInput::GetRowSize()
{
    return m_iRow;
}

int UserInput::GetColSize()
{
    return m_iCol;
}
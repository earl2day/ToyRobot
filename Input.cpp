#include <iostream>
#include "Input.h"

Input::Input()
{
    m_chCmd = '0';
    m_iXPos = -1;
    m_iYPos = -1;
    char m_chDir = '0';
    m_iRow = -1;
    m_iCol = -1;
}

Input::~Input()
{
}

char Input::GetCommand()
{
    if (m_ObjToken[0] == "PLACE")
    {
        m_chCmd = 'P';
        m_iXPos = atoi(m_ObjToken[1].c_str());
        m_iYPos = atoi(m_ObjToken[2].c_str());

        if (m_ObjToken[3] == "NORTH") m_chDir = 'N';
        else if (m_ObjToken[3] == "WEST") m_chDir = 'W';
        else if (m_ObjToken[3] == "EAST") m_chDir = 'E';
        else if (m_ObjToken[3] == "SOUTH") m_chDir = 'S';
        else m_chDir = '0';
    }
    else if (m_ObjToken[0] == "MOVE") m_chCmd = 'M';
    else if (m_ObjToken[0] == "LEFT") m_chCmd = 'L';
    else if (m_ObjToken[0] == "RIGHT") m_chCmd = 'R';
    else if (m_ObjToken[0] == "REPORT") m_chCmd = 'O';
    else if (m_ObjToken[0] == "EXIT") m_chCmd = 'X';
    else m_chCmd = '0';

    return m_chCmd;
}

bool Input::Parse(std::string input)
{
    int startSub = 0, endSub = 0;
    for (int index = 0; index < input.size(); index++)
    {
        if (index > 0 && ((input[index] == ' ' && input[index - 1] != ' ') || (input[index] == ',' && input[index - 1] != ',')))
        {
            m_ObjToken.push_back(input.substr(startSub, index - startSub));
            startSub = index + 1;
        }
    }

    m_ObjToken.push_back(input.substr(startSub, input.size()));

    return true;
}

int Input::GetRowSize()
{
    return m_iRow;
}

int Input::GetColSize()
{
    return m_iCol;
}

int Input::GetXPosition()
{
    return m_iXPos;
}

int Input::GetYPosition()
{
    return m_iYPos;
}

char Input::GetDirection()
{
    return m_chDir;
}

void Input::SetYPosition(int yPos)
{
    m_iYPos = yPos;
}

void Input::SetXPosition(int xPos)
{
    m_iXPos = xPos;
}

void Input::SetDirection(char chDir)
{
    m_chDir = chDir;
}

void Input::IncXPos(void)
{
    m_iXPos++;
}
void Input::IncYPos(void)
{
    m_iYPos++;
}
void Input::DecXPos(void)
{
    m_iXPos--;
}

void Input::DecYPos(void)
{
    m_iYPos--;
}

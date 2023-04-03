#include <iostream>
#include <sstream>
#include "FileInput.h"

FileInput::FileInput(std::string filename)
{
    m_fstream.open(filename);
    std::string line;
    if (m_fstream.is_open())
    {
        std::getline(m_fstream, line);
        std::stringstream stream(line);
        stream >> m_iRow;  stream >> m_iCol;
    }
}

FileInput::~FileInput()
{
}

void FileInput::GetInput(void)
{
    std::string line;
    m_ObjToken.clear();
    std::getline(m_fstream, line);
    Parse(line);
}
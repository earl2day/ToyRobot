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

int FileInput::GetRowSize()
{
    return m_iRow;
}

int FileInput::GetColSize()
{
    return m_iCol;
}

void FileInput::GetInput(void)
{
    std::string line;
    m_ObjToken.clear();
    std::getline(m_fstream, line);
    Parse(line);
}
/*
Author: Earl Rex Arao-arao
Email : earl2day@gmail.com
*/

#include "TableTop.h"

TableTop::TableTop(int xunit, int yunit)
 : m_xunit(xunit), m_yunit(yunit)
{
}

TableTop::~TableTop()
{
}

int TableTop::GetXSize(void)
{
 return m_xunit;
}

int TableTop::GetYSize(void)
{
 return m_yunit;
}

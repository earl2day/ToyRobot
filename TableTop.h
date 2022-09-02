#ifndef _TABLE_TOP_
#define _TABLE_TOP_

class TableTop
{
public:
	TableTop(int xunit=5, int yunit=5);
	~TableTop();
        int GetXSize(void);
        int GetYSize(void);
private:
	int m_xunit, m_yunit;
};
#endif

#ifndef _TABLE_TOP_
#define _TABLE_TOP_
#include "Robot.h"

class TableTop
{
public:
	TableTop(int xunit=5, int yunit=5);
	~TableTop();
	void  Add(Robot* robot);
	void RobotMove(void);
	void RobotLeft(void);
	void RobotRight(void);
	void RobotReport(void);

private:
	int m_xunit, m_yunit;
	Robot* m_robot;
};
#endif

#ifndef _TABLE_TOP_
#define _TABLE_TOP_
#include <vector>
#include "Robot.h"

class TableTop
{
public:
	TableTop(int xunit=5, int yunit=5);
	~TableTop();
	bool  Add(Robot& robot);
	bool MoveRobot(int robotNum);
	bool LeftRobot(int robotNum);
	bool RightRobot(int robotNum);
	bool ReportRobot(int robotNum);

private:
	int m_xunit, m_yunit;
	std::vector<Robot> m_robot_list;
};
#endif

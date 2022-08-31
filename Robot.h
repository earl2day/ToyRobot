#ifndef _ROBOT_H_
#define _ROBOT_H_
#include "UserInput.h"

class Robot
{
public:
	Robot();
	~Robot();
	void Add(UserInput& input);
	bool Move();
	bool Left();
	bool Right();
	bool Report();
private:
	UserInput m_ObjInput;
};
#endif

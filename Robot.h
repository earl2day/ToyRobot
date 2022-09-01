#ifndef _ROBOT_H_
#define _ROBOT_H_
#include "UserInput.h"

class Robot
{
public:
	Robot();
	~Robot();
	void Add(UserInput* input);
        char GetDirection();
	void Move(int xlimit, int ylimit);
	void Left();
	void Right();
	void Report();
        void IncXPos(void);
        void IncYPos(void);
        void DecXPos(void);
        void DecYPos(void);
private:
        void Error(std::string message);
	UserInput* m_ObjInput;
};
#endif

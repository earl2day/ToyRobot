#ifndef _ROBOT_H_
#define _ROBOT_H_
#include "UserInput.h"
#include "TableTop.h"

class Robot
{
public:
	Robot(TableTop* table);
	~Robot();
	void Place(UserInput* input);
        char GetDirection();
	void Move();
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
        TableTop* m_tableTop;
};
#endif

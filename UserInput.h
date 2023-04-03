#ifndef _USER_INPUT_
#define _USER_INPUT_
#include <string>
#include <vector>
#include "Input.h"

class UserInput : public Input
{
public: 
	UserInput();
	~UserInput();
	void GetInput(void);
};
#endif

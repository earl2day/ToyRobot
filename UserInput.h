#ifndef _USER_INPUT_
#define _USER_INPUT_
#include <string>
#include <vector>

class UserInput
{
public: 
	UserInput();
	~UserInput();
	void GetInput(void);
	char GetCommand(void);
	int GetXPosition();
	int GetYPosition();
	char GetDirection();
	bool SetYPosition(int yPos);
	bool SetXPosition(int xPos);
	bool SetDirection(char chDir);
private:
	bool Parse(std::string input);

	std::string m_strUserInput;
	char m_chCmd;
	int m_iXPos, m_iYPos;
	char m_chDir;
	std::vector<std::string> m_ObjToken;
};
#endif

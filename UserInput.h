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
	void SetYPosition(int yPos);
	void SetXPosition(int xPos);
	void SetDirection(char chDir);
        void IncXPos(void);
        void IncYPos(void);
        void DecXPos(void);
        void DecYPos(void);
private:
	bool Parse(std::string input);

	std::string m_strUserInput;
	char m_chCmd;
	int m_iXPos, m_iYPos;
	char m_chDir;
	std::vector<std::string> m_ObjToken;
};
#endif

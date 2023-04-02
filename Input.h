#ifndef _INPUT_
#define _INPUT_
#include <vector>
#include <string>

class Input
{
public:
	Input();
	~Input();
    virtual void GetInput(void)=0;
	virtual int GetRowSize()=0;
	virtual int GetColSize()=0;
	char GetCommand(void);
	char GetDirection();
	int GetXPosition();
	int GetYPosition();
	void SetYPosition(int yPos);
	void SetXPosition(int xPos);
	void SetDirection(char chDir);
	void IncXPos(void);
	void IncYPos(void);
	void DecXPos(void);
	void DecYPos(void);
	bool Parse(std::string input);
protected:
	int m_iRow;
	int m_iCol;
	std::string m_strUserInput;
	char m_chCmd;
	int m_iXPos, m_iYPos;
	char m_chDir;
	std::vector<std::string> m_ObjToken;
};
#endif

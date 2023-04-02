#ifndef _FILE_INPUT_
#define _FILE_INPUT_

#include <string>
#include <fstream>
#include "Input.h"

class FileInput : public Input
{
public:
	FileInput(std::string filename);
	~FileInput();
	int GetRowSize();
	int GetColSize();
	void GetInput(void);
private:
	std::ifstream m_fstream;
};
#endif

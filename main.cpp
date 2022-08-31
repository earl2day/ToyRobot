#include <iostream>
#include "Robot.h"
#include "TableTop.h"
#include "UserInput.h"

int main()
{
 TableTop table;
 Robot robot;
 UserInput input;
 table.Add(robot);
 for(;;)
 {
   input.GetInput();
   robot.Add(input);
   switch(input.GetCommand())
   {
    case 'P'  : std::cout << std::endl << "Command PLACE" << std::endl;
	        break;
    case 'M'  : std::cout << std::endl << "Command MOVE" << std::endl;
		break;
    case 'L'  : std::cout << std::endl << "Command LEFT" << std::endl;
		break;
    case 'R'  : std::cout << std::endl << "Command RIGHT" << std::endl;
		break;
    case 'O'  : std::cout << std::endl << "Command REPORT" << std::endl;
		break; 
   } 
 }
 return 0;
}

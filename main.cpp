#include <iostream>
#include "Robot.h"
#include "TableTop.h"
#include "UserInput.h"

int main()
{
 TableTop table(5,5);
 Robot robot;
 table.Add(&robot); 
 UserInput input;

 for(;;)
 {
   input.GetInput();
   switch(input.GetCommand())
   {
    case 'P'  : //std::cout << std::endl << "Command PLACE" << std::endl;
                robot.Add(&input);
	        break;
    case 'M'  : std::cout << std::endl << "Command MOVE" << std::endl;
		break;
    case 'L'  : std::cout << std::endl << "Command LEFT" << std::endl;
		break;
    case 'R'  : std::cout << std::endl << "Command RIGHT" << std::endl;
		break;
    case 'O'  : //std::cout << std::endl << "Command REPORT" << std::endl;
                table.RobotReport();
		break; 
   } 
 }
 return 0;
}

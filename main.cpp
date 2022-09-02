#include <iostream>
#include "Robot.h"
#include "TableTop.h"
#include "UserInput.h"

int main()
{
 TableTop table(5,5);
 Robot robot(&table);
 UserInput input;

 for(;;)
 {
   input.GetInput();
   switch(input.GetCommand())
   {
    case 'P'  : robot.Place(&input);
	        break;
    case 'M'  : robot.Move();
		break;
    case 'L'  : robot.Left();
		break;
    case 'R'  : robot.Right();
		break;
    case 'O'  : robot.Report();
		break; 
   } 
 }
 return 0;
}

/*
Author: Earl Rex Arao-arao
Email : earl2day@gmail.com
*/

#include <iostream>
#include "Robot.h"
#include "TableTop.h"
#include "UserInput.h"

int main()
{
 TableTop table(10,10);
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
    case 'X'  : exit(0);
   } 
 }
 return 0;
}

#include <iostream>
#include "Robot.h"
#include "TableTop.h"
#include "UserInput.h"

int main(int argc, char* argv[])
{
  int xSize = -1, ySize = -1;

 //check if there is input file and
  if (argc > 1)
  {
      //open the file
      ///read the file per line
      //first line should be table size
      //second line should be initial location
      //next if the moves like MOVE, REPORT, LEFT, RIGHT, EXIT
  }
  else
  {
      for (;;)
      {
          std::cout << "Please enter table horizontal and vertical size Example: 10 10" << std::endl;
          std::cin >> xSize >> ySize;
          if (xSize < 0 || ySize < 0) { xSize = -1; ySize = -1; continue; }
          else break;
      }
  }

 TableTop table(xSize,ySize);
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

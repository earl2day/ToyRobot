#include <iostream>
#include <typeinfo>
#include "Robot.h"
#include "TableTop.h"
#include "Input.h"
#include "UserInput.h"
#include "FileInput.h"

int main(int argc, char* argv[])
{
    Input* input;
  if (argc > 1) //check if there is input file
  {
      input = new FileInput(argv[1]);
  }
  else
  {
      input = new UserInput();
  }

 TableTop table(input->GetRowSize(), input->GetColSize());
 Robot robot(&table);

 for(;;)
 {
   input->GetInput();
   switch(input->GetCommand())
   {
    case 'P'  : robot.Place(input);
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

 if (typeid(*input).name() == "FileInput") delete (FileInput*)input;
 else delete (UserInput*)input;

 return 0;
}

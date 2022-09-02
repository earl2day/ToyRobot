# ToyRobot
A games where a table size is set and place the robot to any valid location in the table. The robot can be move or change it's direction. 

To play:
1. Run the program
2. Type in the command line the command PLACE x,y,d where x is the x location in the table, y is the vertical location in the table, and d is the direction which can be NORTH SOUTH WEST or EAST
3. LEFT command is to let the robot face LEFT
4. RIGHT command is to let the robot face RIGHT
5. MOVE is to move the robot forward to the current direction
6. REPORT is to display the current location and direction of the robot in the table

Example:
PLACE 0,0,NORTH
REPORT
Output: 0,0,NORTH
MOVE
REPORT
Output: 0,1,NORTH
LEFT
REPORT
Output: 0,1,WEST
EXIT

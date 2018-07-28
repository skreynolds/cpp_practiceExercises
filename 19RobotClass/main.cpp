#include <iostream>
#include "main.hpp"

int main(void){
	/*Create an instance of Robot*/
	Robot robot_1;
	/*Print out the robot speed*/
	std::cout << "Speed= " << robot_1.Speed() << std::endl;
	return 0;
}

#include <iostream>
#include "main.hpp"

int main(void){

	// initialise an instance of bouncing ball
	Bouncingball ball_1;

	int bounce_count = ball_1.bouncingBall(30, 0.66, 1.5);

	std::cout << bounce_count << std::endl;

	return 0;
}

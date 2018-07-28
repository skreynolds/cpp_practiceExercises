#include "main.hpp"

int main(void){

	Robot<int> robot_1(100);
	Robot<float> robot_2(50.2);
	Robot<std::string> robot_3("ten");

	std::cout << robot_1.GetSpeed() << std::endl;
	std::cout << robot_2.GetSpeed() << std::endl;
	std::cout << robot_3.GetSpeed() << std::endl;

	return 0;
}

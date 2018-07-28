#include <iostream>
#include "main.hpp"

int main(void){
	/* Create an instance of wheel */
	Wheel wheel_1;

	/* Create a pointer instance of wheel
	 * and assign the pointer from the
	 * memory address of wheel_1 */
	Wheel *wheel_1_pt = &wheel_1;

	/* Print out the speed from the actual object
	 * and then print out the speed from the pointer
	 * to the object. NOTE: the speed from the
	 * pointer is accessed using the '->' operator */
	std::cout << "Wheel speed accessed by the object= " << wheel_1.Speed() << std::endl;
	std::cout << "Wheel speed accessed by the pointer to the wheel= " << wheel_1_pt->Speed() << std::endl;
	std::cout << "Memory address of wheel 1 object= " << wheel_1_pt << std::endl;

	return 0;
}

#include "main.hpp"

int main(void){

	// TODO: TDD development by writing your own tests as you solve the kata

	//initialise and execute test case 1
	SequenceSum test1(6);
	std::string test_output1 = test1.showSequence();
	std::cout<<test_output1<<std::endl;

	//initialise and execute test case 2
	SequenceSum test2(-15);
	std::string test_output2 = test2.showSequence();
	std::cout<<test_output2<<std::endl;

	//initialise and execute test case 3
	SequenceSum test3(0);
	std::string test_output3 = test3.showSequence();
	std::cout<<test_output3<<std::endl;

	return 0;
}

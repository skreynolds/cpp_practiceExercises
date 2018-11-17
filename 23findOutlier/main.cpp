#include "main.hpp"
#include <vector>


int main(void){

	// initialise vector
	std::vector<int> my_vector;

	// initialise array to go into vector
	int int_arr[] = {2,3,4};

	// insert array values into vector
	my_vector.assign (int_arr, int_arr+3);

	// test function
	int output = FindOutlier(my_vector);

	// print the function output to console
	std::cout << output << std::endl;

	return 0;
}

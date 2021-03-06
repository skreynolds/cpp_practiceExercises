/*An Arithmetic Progression is defined as one in which there is a
 * constant difference between the consecutive terms of a given
 * series of numbers. You are provided with consecutive elements of
 * an Arithmetic Progression. There is however one hitch: exactly
 * one term from the original series is missing from the set of
 * numbers which have been given to you. The rest of the given
 * series is the same as the original AP. Find the missing term.

 * You have to write the function findMissing(list), list will always
 * be at least 3 numbers. The missing term will never be the first or
 * last one.
*/

#include "main.hpp"

int main(void){


	std::vector<long> test_vect1;
	long test_arr1[5] = {-8, -9, -11};
	test_vect1.assign(test_arr1, test_arr1+3);
	float result1 = -10;

	float out1 = findMissing(test_vect1);

	std::cout<<out1<<std::endl;

	if (out1 == result1){
		std::cout<<"Test Passed.";
	}

	return 0;
}

/* Write a function that takes an array of strings as an argument and
 * returns a sorted array containing the same strings, ordered from
 * shortest to longest.

 * For example, if this array were passed as an argument:

 * ["Telescopes", "Glasses", "Eyes", "Monocles"]

 * Your function would return the following array:

 * ["Eyes", "Glasses", "Monocles", "Telescopes"]

 * All of the strings in the array passed to your function will be
 * different lengths, so you will not have to decide how to order multiple
 * strings of the same length.*/

#include "main.hpp"

int main(void){
	//set up the input array and put this into a vector class
	std::string test_input[4] = { "Beg", "Life", "I", "To" };
	std::vector<std::string> test_vector;
	test_vector.insert(test_vector.begin(), test_input, test_input+4);

	//initialise the test object to run the function
	Kata test1;
	test1.sortByLength(test_vector);
	return 0;
}

/* You are going to be given a word. Your job is to return the middle
 * character of the word. If the word's length is odd, return the middle
 * character. If the word's length is even, return the middle 2 characters.
*/

#include "main.hpp"

int main(void){
	std::string test1 = "tested";
	std::string out1 = get_middle(test1);
	std::cout<<out1<<std::endl;

	std::string test2 = "testing";
	std::string out2 = get_middle(test2);
	std::cout<<out2<<std::endl;

	return 0;
}

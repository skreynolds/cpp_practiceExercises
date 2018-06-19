#include <iostream>
#include <string>

std::string get_middle(std::string input){

	std::string out_str;

	//determine string length
	int str_len = input.length();

	//check to see if length is odd or even
	if (str_len % 2 == 0){
		out_str = input.substr(str_len/2-1, 2);
	} else {
		out_str = input.at(str_len/2);
	}
	return out_str;
}

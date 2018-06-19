#include <algorithm>
#include <iostream>
#include <string>

class CountDig{
public:
	int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d){

	char dChar = '0' + d;
	int count = 0;

	for (int i = 0; i < n+1; i++){

		std::string temp_string = std::to_string(i*i);
		size_t k = std::count(temp_string.begin(), temp_string.end(), dChar);
		count += k;
	}

	return count;
}

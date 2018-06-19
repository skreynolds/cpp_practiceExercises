#include <iostream>
#include <string>

class CountDig{
public:
	int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d){

	const int size = n+1;
	std::string arr[size];

	for (int i = 0; i < n+1; i++){
		arr[i] = std::to_string(i*i);
	}

	return 0;
}

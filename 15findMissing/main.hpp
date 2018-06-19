#include <iostream>
#include <vector>


int findMissing(std::vector<int> &vectIn){

	std::vector<int>::iterator it;

	for (it = vectIn.begin(); it != vectIn.end(); ++it){
		std::cout<<*it<<std::endl;
	}

	return 0;
}

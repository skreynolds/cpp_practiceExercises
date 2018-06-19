#include <algorithm>
#include <iostream>
#include <vector>

class SqInRect
{
  public:
  std::vector<int> sqInRect(int lng, int wdth);
};

std::vector<int> SqInRect::sqInRect(int lng, int wdth){
	//initialise the output
	std::vector<int> output;

	//determine the min and max dimensions for the problem
	int min_dim = std::min(lng,wdth);
	int max_dim = std::max(lng,wdth);

	if (max_dim % min_dim == 0){

		std::cout<<"min is a factor of max\n\n";
		int iterations = max_dim / min_dim;

		for (int i = 0; i < iterations; i++){
			output.push_back(min_dim);
		}

		std::vector<int>::iterator it;
		for (it = output.begin(); it != output.end(); ++it){
			std::cout<<*it<<" ";
		}

	} else {

		std::cout<<"min is not a factor of max\n\n";

		int into = max_dim / min_dim;
		int left = max_dim % min_dim;

		std::cout<<"the min goes into max: "<<into<<" with this left over: "<<left<<"\n";
	}

	return output;
}

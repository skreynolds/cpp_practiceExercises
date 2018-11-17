#include <iostream>
#include <vector>

int FindOutlier(std::vector<int> arr)
{

	// initialise variables
	int odd_count = 0;
	int even_count = 0;
	int odd_idx, even_idx;
	int result;

	// run through the vector
	for (int i = 0; i < arr.size(); i++){

		// add to count if the element is even
		if (arr[i] % 2 == 0){
			// store index of first odd
			if (even_count == 0){
				even_idx = i;
			}
			even_count += 1;
		} else {
			// store index of first even
			if (odd_count == 0){
				odd_idx = i;
			}
			odd_count += 1;
		}
	}

	// set the result variable
	if (odd_count == 1){
		result = arr[odd_idx];
	} else if (even_count == 1){
		result = arr[even_idx];
	}

	return result;
}

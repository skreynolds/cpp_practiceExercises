//import system libraries
#include <iostream>
#include <string>
#include <vector>

//import function headers
#include "sense.h"
#include "move.h"

// initialise globals
std::vector <float> p (5, 0.2);
std::vector <float> motions = {1, 1};
std::vector <std::string> measurements = {"red",
								          "green"};

// main function
int main(void){

	for (int k=0; k<measurements.size(); k++){

		p = sense(p, measurements[k]);

		p = move(p, motions[k]);
	}

	for (int i=0; i<p.size(); i++){
		std::cout << p[i] << std::endl;
	}

	return 0;
}

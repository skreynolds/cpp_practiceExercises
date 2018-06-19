/*Take an integer n (n >= 0) and a digit d (0 <= d <= 9) as an integer. Square all
 * numbers k (0 <= k <= n) between 0 and n. Count the numbers of digits d used in
 * the writing of all the k**2. Call nb_dig (or nbDig or ...) the function taking
 * n and d as parameters and returning this count.*/

#include "main.hpp"

int main(void){
	CountDig x;
	x.nbDig(5,2);

	int i = 1;
	std::string j = std::to_string(i);

	std::cout<<"The int is: "<<i<<"the string is: "<<j<<"\n";

	return 0;
}



#include <iostream>
using namespace std;

/*Modify the previous program such that only multiples of
 * three or five are considered in the sum,
 * e.g. 3, 5, 6, 9, 10, 12, 15 for n=17
 *
 * Author: Shane Reynolds
 * */

int main(void){

	int number;
	int sum = 0;

	cout << "Enter a number:\n";
	cin >> number;

	for (int i=1; i<=number; i++){
		if (i%3 == 0 || i%5 == 0){
			sum += i;
		}
	}
	cout << "The sum of multiples of 3 and 5 is: "
			<< sum << endl;
	return 0;
}

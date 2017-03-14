#include <iostream>
using namespace std;

/*Write a program that asks the user for a number n and
 * prints the sum of the numbers 1 to n
 *
 * Author: Shane Reynolds
 *
 * */

int main(void){


	int number;
	int sum = 0;

	cout << "Enter a number:\n";
	cin >> number;

	for (int i=1; i<=number; i++){
		sum += i;
	}

	cout << "The sum from 1 to " << number <<
			" is " << sum << endl;
	return 0;
}

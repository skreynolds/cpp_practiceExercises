#include <iostream>
using namespace std;

/*Write a program that prints a multiplication table for numbers up to 12.
 *
 * Author: Shane Reynolds
 *
 * */

int main(void){
	int number;
	cout << "Enter a number that you want a "
			"multiplication table for:\n";
	cin >> number;

	for (int i=1; i<=12; i++){
		cout << i << "x" << number << "=" << i*number << endl;
	}
	return 0;
}

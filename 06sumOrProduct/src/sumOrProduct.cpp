#include <iostream>
using namespace std;

/*Write a program that asks the user for a number and
 * gives them the possibility to choose between computing
 * the sum and computing the product of 1,…,n.
 *
 * Author: Shane Reynolds
 *
 * */

int main(void){
	int number;
	string selection;
	int output = 1;

	cout << "Enter a number greater than 0:\n";
	cin >> number;
	cout << "Sum or Product:\n";
	cin >> selection;

	for (int i=2; i<=number; i++){
		if (selection == "Sum"){
			output += i;
		}else{
			output *= i;
		}
	}
	cout << "The output for " << selection
			<< " is " << output << endl;
	return 0;
}

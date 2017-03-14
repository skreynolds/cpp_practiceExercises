#include <iostream>
#include <cmath>

using namespace std;

/*Write a program that prints all prime numbers.
 * Author: Shane Reynolds */

int main(void){

	int number;
	cout << "Enter a number: \n";
	cin >> number;

	for (int n=1;n<=number;n++){

		bool sentinel = true;

		for (int i=2; i<=pow(number,0.5); i++){
			if (n%i == 0){
				sentinel = false;
				continue;
			}
		}
		if (sentinel == true){
			cout << n << endl;
		}
	}

	return 0;
}

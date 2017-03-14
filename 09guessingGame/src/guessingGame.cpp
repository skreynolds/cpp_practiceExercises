#include <iostream>
using namespace std;

/*Write a guessing game where the user has to guess a secret
 * number. After every guess the program tells the user whether
 * their number was too large or too small. At the end the
 * number of tries needed should be printed. I counts only as
 * one try if they input the same number multiple times
 * consecutively.
 *
 * Author: Shane Reynolds */

int main(void){
	int number, guess;
	cout << "Enter a number to guess:\n";
	cin >> number;

	while(true){
		cout << "Guess the number:\n";
		cin >> guess;

		if (guess < number){
			cout << "Too low. Try again.\n";
		}else{
			if (guess > number){
				cout << "Too high. Try again.\n";
			}else{
				cout << "Well done. You guessed the number.\n";
				break;
			}
		}
	}
	return 0;
}

#include <iostream>
using namespace std;

/*Modify the previous program such that only
 * the users Alice and Bob are greeted with their
 * names.
 *
 * Author: Shane Reynolds
 *
 * */

int main(void){
	string name;
	cout << "Enter your name:\n";
	cin >> name;
	if (name == "Bob" || name == "Alice"){
		cout << "Hello " << name << "!\n" << endl;
	}
	return 0;
}

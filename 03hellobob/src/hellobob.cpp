#include <iostream>
using namespace std;

int main(void){
	string name;
	cout << "Enter your name:\n";
	cin >> name;
	if (name == "Bob" || name == "Alice"){
		cout << "Hello " << name << "!\n" << endl;
	}
	return 0;
}

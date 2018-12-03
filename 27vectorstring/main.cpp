#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){

	vector <string> test = {"Amazing", "string"};

	for (int i=0; i<test.size(); i++){
		cout << test[i] << endl;
	}

	return 0;
}

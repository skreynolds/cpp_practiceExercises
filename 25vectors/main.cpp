#include <iostream>
#include <vector>

using namespace std;

// function declarations
vector <float> subtract(vector <float> vec1, vector <float> vec2);
vector <float> mult(vector <float> vec3, vector <float> vec4);

int main(void){

	// idea 1
	vector <float> vec1(3);
	vec1[0] = 5;
	vec1[1] = 10;
	vec1[2] = 27;

	vector <float> vec2(3);
	vec2[0] = 3;
	vec2[1] = 17;
	vec2[2] = 12;

	vector <float> out_vect (vec1.size());
	out_vect = subtract(vec1, vec2);

	for (int i=0; i<out_vect.size(); i++){
		cout << out_vect[i] << " ";
	}
	cout << "\n";

	//idea 2
	vector <float> vec3 = {17,10,31,5,7};
	vector <float> vec4 = {3,1,6,19,8};

	vector <float> out_vect2 (vec3.size());
	out_vect2 = mult(vec3, vec4);

	for (int i=0; i<out_vect2.size(); i++){
		cout << out_vect2[i] << " ";
	}

	return 0;

}


// specification of subtract function
vector <float> subtract(vector <float> vec1, vector <float> vec2){

	vector <float> out_vect (vec1.size());

	for (int i=0; i<vec1.size(); i++){
		out_vect[i] = vec1[i] - vec2[i];
	}

	return out_vect;

}

// specification of multiplication function
vector <float> mult(vector <float> vec3, vector <float> vec4){

	vector <float> out_vect (vec3.size());

	for (int i=0; i<vec3.size(); i++){
		out_vect[i] = vec3[i] * vec4[i];
	}

	return out_vect;

}

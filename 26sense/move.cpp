#include <vector>

float pExact = 0.8;
float pOvershoot = 0.1;
float pUndershoot = 0.1;

std::vector <float> move(std::vector <float> p, int U){

	std::vector <float> q;

	float s;

	for (int i=0; i<p.size(); i++){

		s = pExact * p[(i-U) % p.size()];

		s = s + pOvershoot * p[(i-U-1) % p.size()];

		s = s + pUndershoot * p[(i-U+1) % p.size()];

		q.push_back(s);
	}

	return q;

}

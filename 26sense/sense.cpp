#include <numeric>
#include <string>
#include <vector>

float pHit = 0.6;
float pMiss = 0.2;
std::vector <std::string> world = {"green",
							       "red",
							       "red",
							       "green",
							       "green"};

std::vector <float> sense(std::vector <float> p, std::string Z){

	std::vector <float> q;

	for (int i=0; i<p.size(); i++){

		bool hit = (Z == world[i]);

		q.push_back(p[i] * (hit * pHit + (1 - hit) * pMiss));
	}

	float s = std::accumulate(q.begin(), q.end(), 0.0);

	for (int i=0; i<q.size(); i++){
		q[i] = q[i]/s;
	}

	return q;

}

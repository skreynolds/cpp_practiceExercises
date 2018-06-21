#include <iostream>
#include <vector>


static long findMissing(std::vector<long> vectIn){

	std::vector<long>::iterator it;

	float a1 = vectIn.front();
	float aN = vectIn.back();
	float N = vectIn.size() + 1;
	float sum = 0;
	float a_xi;

	std::cout<<"a1 is: "<<a1<<std::endl;
	std::cout<<"aN is: "<<aN<<std::endl;
	std::cout<<"N is: "<<N<<std::endl;

	for (it = vectIn.begin(); it != vectIn.end(); ++it){
		sum += *it;
	}

	std::cout<<"sum is: "<<sum<<std::endl;

	float d = (aN - a1)/(N - 1);

	std::cout<<"d is: "<<d<<std::endl;

	a_xi = N*(a1 - d) + (d/2)*N*(N + 1) - sum;

	std::cout<<N*(a1 - d)<<std::endl;
	std::cout<<(d/2)*N*(N + 1)<<std::endl;

	return a_xi;
}

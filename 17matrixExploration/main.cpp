#include <iostream>
#include <Eigen/Dense>

int main(void){

	Eigen::MatrixXd m(2,2);
	Eigen::MatrixXd mT(2,2);

	m(0,0) = 3;
	m(1,0) = 2.5;
	m(0,1) = -1;
	m(1,1) = m(1,0) + m(0,1);

	mT = m.transpose();

	std::cout << "m = \n" << m << std::endl;
	std::cout << "mT = \n" << mT << std::endl;
	std::cout << mT.rows() << std::endl;

	return 0;

}

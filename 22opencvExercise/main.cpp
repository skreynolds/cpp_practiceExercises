#include <opencv2/opencv.hpp>
#include <iostream>

int main(void){

	cv::Mat image = cv::imread("Udacity.png", CV_LOAD_IMAGE_COLOR);

	cv::namedWindow("Display window");

	cv::imshow("Display window", image);

	std::cout << image;

	cv::waitKey(0);

	return 0;
}

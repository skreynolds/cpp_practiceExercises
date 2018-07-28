#include <iostream>
#include <string.h>

template <class data_type>
class Robot{
	private:
		data_type speed;
	public:
		Robot(data_type speed_in);
		data_type GetSpeed();
};

template<class data_type>
Robot<data_type>::Robot(data_type speed_in){
	speed = speed_in;
}

template<class data_type>
data_type Robot<data_type>::GetSpeed(){
	return speed;
}

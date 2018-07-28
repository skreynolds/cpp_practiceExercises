/*Define a class called Robot*/
class Robot{
	public:
		int Speed();
};

int Robot::Speed(){
	return 10;
}

/*Derive a class from Robot called Wheel*/
class Wheel: public Robot{};

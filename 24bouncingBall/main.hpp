
class Bouncingball
{
public:
    // member function declaration
	static int bouncingBall(double h, double bounce, double window);
};

// member function definition
int Bouncingball::bouncingBall(double h, double bounce, double window){

	// initialise count past window
	int count = 0;

	// check parameters are correct
	if (h > 0
		&& bounce > 0
		&& bounce < 1
		&& window < h){

			// initialise the current height
			double h_current = h;

			while(1){

				// down
				if (h_current > window) {
					count += 1;
					h_current *= bounce;
				}else{
					break;
				}

				// up
				if (h_current > window) {
					count += 1;
				}else{
					break;
				}
			}
	}else{
		count = -1;
	}

	return count;

}

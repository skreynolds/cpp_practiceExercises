#include <iostream>
#include <string>

class SequenceSum{
private:
	int count;
public:
  SequenceSum (int);
  std::string showSequence();

};

std::string SequenceSum::showSequence(){

	//initialise an empty string
	std::string out_string;

	if (count < 0){

		out_string.append(std::to_string(count));
		out_string.append(" < 0");

	} else if (count == 0){

		out_string.append("0 = 0");

	} else {



		//initialise the output value
		int output = 0;

		for (int i = 0; i < count+1; ++i){
			out_string.append(std::to_string(i));
			out_string.append("+");
			output += i;
		}

		out_string.pop_back();
		out_string.append(" = ");
		out_string.append(std::to_string(output));
	}

	return out_string;

}

SequenceSum::SequenceSum (int c) {
  count = c;
}

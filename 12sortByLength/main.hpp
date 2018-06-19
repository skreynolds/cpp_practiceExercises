#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {

    	std::vector<int>::iterator it;
    	for (it = array.begin(); it != array.end(); ++it){
    		std::cout<<*it<<" ";
    	}

    	return array;
    }
};

// CMakeProject3.cpp : Defines the entry point for the application.


#include "CMakeProject3.h"

using namespace std;
class myBase {
public:	const int int1 = 0xfeel;
	  int int2 = 0xfee;

	myBase() {
		std::cout << "int1 is:" << int1 << endl;
		std::cout << "int2 is:" << int2 << endl;
		std::cout << sizeof(myBase) << endl;
	}
};

int main()
{
	cout << "Hello CMake." << endl;
	myBase mybase1;
	return 0;
}


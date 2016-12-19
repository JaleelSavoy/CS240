#include <iostream> //C++ standard libraries must be included at start of C++ programs
#include <iomanip> //C++ standard libraries must be ...

using namespace std; //standard (std) objects can be used from the included libraries

int main() //program name is always main with int before it
{
	int num1, num2, sum; //num1, num2, and sum are the data items
	
	num1 = 10; //num1 get initial value from instructions via assignment
	num2 = 15; //num2 get initial value from instructions via assignment
	
	sum = num1 + num2; //sum gets it value from the arithmetic expression
	cout << "The sum is " << sum; //another, simplier, way of displaying the message using concatenation
	return 0;
}


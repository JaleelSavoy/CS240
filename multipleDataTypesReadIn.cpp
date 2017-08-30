//this program demonstrates how cin can read multiple values
//of different data types
#include <iostream>
using namespace std;

int main(){
	int whole;
	double fractional;
	char letter;
	
	cout << "Enter an integer, a double and a character (seperate by space):\t";
	cin  >> whole >> fractional >> letter;
	cout << "Whole:\t" << whole << endl;
	cout << "Fractional:\t" << fractional << endl;
	cout << "Letter:\t" << letter << endl;
	return 0;


}

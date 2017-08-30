//this program extracts the rightmost digit of a number
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//variables to store the values
	int number = 12345;
	int rightMost = number % 10; 
	
	//display the result
	cout << "The rightmost digit in "
		 << number << " is "
		 << rightMost << endl;
		 
	return 0;
}

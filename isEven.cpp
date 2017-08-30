//returning a boolean
#include <iostream>

using namespace std;

//function prototype
bool isEven(int);

int main(){
	
	int val;
	
	//get a number from the user
	cout << "Enter an integer and I will tell you ";
	cout << "if it is even or odd: ";
	cin  >> val;
	
	//indicate whether it is even or odd
	if (isEven(val)){
		cout << val << " is even" << endl;
	}
	else{
		cout << val << " is odd" << endl;
	}
	
	return 0;
}

//*****************************************************************
 // Definition of function isEven. 
//  accepts integer argument and tests it to be even or odd
// returns true if the argument is even or false if the argument
// is odd. The return value is a bool.
//***************************************************************** 

bool isEven(int number = 0){	// default input argument vis 0
	bool status;
	
	if (number % 2 == 0){
		status = true;
	}
	else{
		status = false;
	}
	
	return status;
}

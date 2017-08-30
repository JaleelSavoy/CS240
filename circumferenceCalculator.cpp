//this program calculates the circumference of a circle
#include <iostream>
using namespace std;

int main(){
	
	//constants
	const double PI = 3.14159;
	double diameter;
	
	//display the message
	cout << "This program will calculate the circumreference..." << endl;
	
	//get the value of the diameter
	cout << "Enter the value of the diameter: ";
	cin  >> diameter;	
	
	//variables to hold the cirumference
	double circumference;
	
	//calculate the circumference
	circumference = PI * diameter;
	
	//display the circumference
	cout << "The circumference is: " << circumference << endl;
	cout << "The diameter is: " << diameter << endl;
	cout << "The value for PI is approximately: " << PI << endl;

	
	return 0;
}

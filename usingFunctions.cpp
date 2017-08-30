//functions
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

//variables to hold values
string name, city, state, country;
int age;
double height, weight;

//*******************************************
//	Definition of function greetingMessage	
//	This function displays a greeting		
//*******************************************
void greetingMessage() {
	
	cout << "Hello, what is your codename?" << endl;
	cin  >> name;
	cout << "Oh, " << name << ", that is a nice name! Welcome to this program!" << endl;
	
}

//*******************************************
//	Definition of function displayAvg	
//	This function displays the average of the arguments		
//*******************************************
void displayAvg() {
	
	//variables
	double num1, num2, num3, total;
	cout << "Enter three numbers:\t\t";
	cin  >> num1 >> num2 >> num3;
	
	//calculate result
	total = (num1 + num2 + num3) / 3.0;
	
	//display result
	cout << "average:\t\t" << total << endl;
}


//*******************************************
//definition of function personalInformation
//this function gathers personal information
//*******************************************
void personalInformation(){
	
	cout << "What is your age?" << endl;
	cin  >> age;
	cout << "What is your city, state, and country? Separated by spaces\t\t";
	cin  >> city >> state >> country;
	cout << "What is your height (in) and weight (lbs)? Separated by spaces..." << endl;
	cin  >> height >> weight;
	
}

//*******************************************
//definition of function displayPID
//this function displays personal information
//*******************************************
void displayPID(){
	
	
	cout << endl << endl;
	cout << "Name:\t\t\t" << name << endl;
	cout << "Age:\t\t\t"  << age <<  endl;
	cout << "Height:\t\t\t" << height << endl;
	cout << "Weight:\t\t\t" << weight << endl;
	cout << "City:\t\t\t" << city << endl;
	cout << "State:\t\t\t" << state << endl;
	cout << "Country:\t\t" << country << endl;
	cout << endl << endl;
	
}

//*******************************************
//Function main
//*******************************************

int main(){
	greetingMessage();
	personalInformation();
	displayPID();
	displayAvg();
	
	return 0;
}

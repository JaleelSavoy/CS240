//this program asks the user to enter the length and width of a rectangle's
//area and displays the value on the screen
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	
	//establish constants
	const double PI = 3.14159;
	
	//get user's name and store it in a variable
	cout << "What is your name?\t";
	string name;
	cin  >> name;
	
	//greet user with message
	cout << "Hello, " << name << "!" << endl;
	cout << "We will calculate the area of any rectangle, triangle or circle!" << endl;
	
	//have user choose the appropriate shape
	respawn:
	int ans;
	double width, height, area, radius;
	cout << "Choose your shape: \t1) Rectangle \t2) Triangle \t3) Circle" << endl;
	cin  >> ans;
	
	
	switch(ans){
		case 1:
			cout << "Enter the width and height, seperated by a space: ";
			cin  >> width >> height;
			area = width * height;
			cout << "The area is: " << area << endl;
			break;
		case 2:
			cout << "Enter the width and height, seperated by a space: ";
			cin  >> width >> height;
			area = (width * height)/2;
			cout << "The area is: " << area << endl;
			break;
		case 3:
			cout << "What is the radius of the cirlce: ";
			cin  >> radius;
			area = PI * pow(radius, 2);
			cout << "The area is: " << area << endl;
			break;
		default:
			cout << "Not A Valid Selection: Retry";
			goto respawn;
	}
	
	return 0;
}

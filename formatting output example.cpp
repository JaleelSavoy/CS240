#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double d;
	double quo = 100.0/3.0;
	double x;
	double y;
	double z;
	
	cout << "100.0/3.0 as double is: " << quo; 
	
	cout << "\nEnter a floating point number: ";
	cin >> d;
	
	cout << "Num in native format: " << d;	//display up to 6 digits
	
	cout << endl << "W = 5, p = 3: |"
									<< setw(5)
									<< fixed
									<< setprecision(3)
									<< d << "|";
	
	cout << "Enter a value for x: ";
	cin >> x;
	cout << "Enter a value for y: ";
	cin >> y;
	cout << "Enter a value for z: ";
	cin >> z;
	
	cout << setw(5) << x << setw(5) << y << z; //this sets the width at 5 for x and y and lets z stay in its native form (6 digits)
						
	return 0;
}

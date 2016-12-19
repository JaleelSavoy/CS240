#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i; //declare an int to hold the value to be typed in
	
	cout << "Enter the temperature: "; //tell the user to enter a value for a purpose
	
	cin >> i; //get the value that is entered by the user
		if (i > 55) {
		cout << i << " is far to warm for me!";
	}else if (i < 55){
		cout << i << " is far to cold for me!";
	} else {
		cout << "Must provide an integer!"; //did not work as intended, chars values = 0 
	}
	
	//that if-statement determines what output the user will get
	return 0;
}

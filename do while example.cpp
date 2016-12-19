#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int aSpeed;
	int speedSum = 0;
	int speedCount = 0;
	
	string choice;
	
	do
	{
		cout << endl << "Enter a speed: ";
		cin >> aSpeed;
		
		speedCount++;
		speedSum += aSpeed;
		
		cout << endl << "Another? (y/n) ";
		cin >> choice;
	}
	while (choice == "y");
	
	cout << endl << "Average is " << (double) speedSum / speedCount;
	
	return 0;
}

//program to calculate average speeds from user input
//user is asked after each value of there is more data
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int aSpeed;
	int speedSum = 0;
	int speedCount = 0;
	
	string choice = "y";
	
	while (choice == "y")	//see note below
	{
		cout << endl << "Enter a speed: ";
		cin >> aSpeed;
		
		speedCount++;
		speedSum += aSpeed;
		
		cout << endl << "Another? (y/n) ";
		cin >> choice;
	}
	
	cout << endl << "Average is " (double) speedSum/speedCount;
	return 0;
}

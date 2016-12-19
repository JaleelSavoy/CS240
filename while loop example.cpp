//program to calculate average temperatures from user input
//user enters -999 or less to quit
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int aTemp;
	int tempSum = 0;
	int tempCount = 0;
	
	cout << endl << "Enter a temperature (-999 to quit): ";
	cin >> aTemp;
	
	while (aTemp > -999)
	{
		tempCount++;
		tempSum += aTemp;
		
		cout << endl << "Enter next temperature (-999 to quit): ";
		cin >> aTemp;
	}
	cout << endl << "Average is " << (double)tempSum/tempCount;
	
	return 0;
}

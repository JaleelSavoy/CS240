#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int sum = 0;	//initialize the sum to 0 is vital
	int count = 0;	//nothing for count
	
	int val;		//declare variable, not initialized
	double average;	//same
	
	cout << endl << "Enter 1st number: ";
	cin >> val;
	
	sum += val;
	count++;
	
	cout << endl << "Enter 2nd number: ";
	cin >> val;
	
	sum += val;
	count++;
	
	cout << endl << "Enter 3rd number: ";
	cin >> val;
	
	sum += val;
	count++;
	
	//calculating average
	average = (double) sum/count;
	
	cout << endl << "The average is " << average;
}

//program to calculate pay for employees using two arrays
//(time and hours)
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	const int NUM_EMPLOYEES = 5;	
	int hours[NUM_EMPLOYEES];
	double payRate[NUM_EMPLOYEES];
	
	//input the hours worked and the hourly pay rate
	cout << "Enter the hours worked by " << NUM_EMPLOYEES
		 << " employees and their" << endl
		 << "hourly pay rates." << endl;
		 
	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "Hours worked by employee #" << (index+1) << ": ";
		cin  >> hours[index];
		cout << "Hourly pay rate for employee #" << index + 1 << ": ";
		cin  >> payRate[index];
	}
	
	//display results (gross pay)
	cout << "Here is the gross pay for each employee: " << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int index = 0; index < NUM_EMPLOYEES; index++){
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << index + 1 << ": $" << grossPay << endl;
		
	}
	
	return 0;
}

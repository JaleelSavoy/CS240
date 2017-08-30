//this program stores, in two vectors, the hours worked by 5
//employees, and their hourly pay rates
#include <iostream>
#include <iomanip>
#include <vector> //needed to define vectors

using namespace std;

int main(){
	const int NUM_EMPLOYEES = 5; 				//number of employees
	vector<int> hours(NUM_EMPLOYEES);		//a vector of ints
	vector<double> payRate(NUM_EMPLOYEES);	//a vector of doubles
	int index;								//loop counter
	
	//input the data
	cout << "Enter the hours worked by " << NUM_EMPLOYEES;
	cout << " employees and their hourly rates" << endl;
	for (index = 0; index < NUM_EMPLOYEES; index++) {
		cout << "Hours worked by employees #" << (index + 1);
		cout << ": ";
		cin  >> hours[index];
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin  >> payRate[index];
	}
	
	//display each employee's gross pay
	cout << endl << "Here is the gross pay for each employee:" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_EMPLOYEES; index++){
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
	return 0;
}

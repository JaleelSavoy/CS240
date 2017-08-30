//program to get the hours of the each employee
#include <iostream>
using namespace std;

int main(){
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int employee;
	
	//get the hours worked by each employee
	cout << "Enter the hours worked by "
		 << NUM_EMPLOYEES << " employees: ";
	
	for (employee = 0; employee < NUM_EMPLOYEES; employee++){
		cout << "Hours for employee #" << employee + 1 << ": " << endl;
		cin  >> hours[employee];
	}
	
	//display the hours in the array
	cout << "The hours entered: " << endl;
	for (employee = 0; employee < NUM_EMPLOYEES; employee++){
		cout << "Employee #" << employee + 1<< " " << hours[employee] << endl;
	}
	
	
	
	return 0;
}

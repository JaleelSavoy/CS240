#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	const double OVERTIMERATE = 1.5;
	double 	totalHours,
			regularWages,
			basePayRate,
			regularHours,
			overtimeWages,
			overtimePayRate,
			overtimeHours;
	
	//get the user input
	userMessage:		
	cout << "How many hours did you work this week?\t";
	cin >> totalHours;
	cout << "What is your regular hourly pay rate?\t";
	cin >> basePayRate;
	
	//determine the amount of regular hours and overtime hours
	if(totalHours > 40 and totalHours > 0){
		overtimeHours = totalHours - 40;
		regularHours = totalHours - overtimeHours;
	}
	else if(totalHours <= 40 and totalHours > 0){
		overtimeHours = 0;
		regularHours = totalHours;
	}
	else{
		cout << endl << "Error: Enter a Number Greater Than Zero";
		cout << endl << "Would you like to try again? Press 0 to continue...\t";
		bool ans = 0;
		cin >> ans;
		if(ans == 0){
			goto userMessage;
		}
		else{
			exit(0);
		}
		
	}
	
	//perform the necessary calculations
	regularWages = basePayRate * regularHours;
	
	overtimePayRate = basePayRate * OVERTIMERATE;
	
	overtimeWages = overtimePayRate * overtimeHours;
	
	//display results to the user
	cout << endl << "Total Hours:\t" << totalHours;
	cout << endl << "Base Pay Rate:\t" << basePayRate;
	cout << endl << "Overtime Hours:\t" << overtimeHours;
	cout << endl << "Regular Wages:\t$" << regularWages;
	cout << endl << "Overtime Wages:\t$" << overtimeWages;
	cout << endl << "Your total wages are $" << regularWages + overtimeWages;
	
	return 0;
}

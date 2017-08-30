//this program calculates the amount of pay that will be contributed
//to a retirement plan if %5, 7%, or 10% of monthly pay is withheld
#include <iostream>
using namespace std;

int main(){
	//variable to hold the monthly pay and the amount of contribution
	double monthlyPay , contribution5, contribution7, contribution10;
	
	//display messasge to user
	cout << "This is a calculator to determine what contribution of your monthly gross";
	cout << "goes into the retirement plan" << endl;
		
	//prompt the user to enter monthly gross total salary
	cout << "Enter your monthly gross salary: ";
	cin >> monthlyPay;
	
	//calculate and display a 5% contribution
	contribution5 = monthlyPay * 0.05;
	cout << "5% is $" << contribution5 << " per month." << endl;
	
	//calculate and display a 7% contribution
	contribution7 = monthlyPay * 0.07;
	cout << "7% is $" << contribution7 << " per month." << endl;
	
	//calculate and display a 10% contribution
	contribution10 = monthlyPay * 0.1;
	cout << "10% is $" << contribution10 << " per month." << endl;
	

	return 0;
}

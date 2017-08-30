#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	
	//the messages displayed to users
	string greetingMessage = "How many hours did you work?";
	string subsequentMessage = "How much do you get paid per hour?";
	
	//varibles used for calculations
	double hours, wage, grossPay;
	
	//gather the inputs for the calculations
	cout << greetingMessage;
	cin >> hours;
	cout << subsequentMessage;
	cin >> wage;
	
	//perform the calculation
	grossPay = wage * hours;
	
	//display the output
	cout << "\aYou have a gross pay of: $" << fixed << setprecision(2) << grossPay << "."; 
	
}

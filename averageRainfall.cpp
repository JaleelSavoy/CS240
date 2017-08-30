//average rainfall small program
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	
	//variables to store values
	double rain_month1, rain_month2, rain_month3, rain_average;
	string month1, month2, month3;
	
	//ask for each month  
	cout << "Enter the first month:\t";
	cin  >> month1;
	
	cout << "Enter the second month:\t";
	cin  >> month2;
	
	cout << "Enter the third month:\t";
	cin  >> month3;
	
	//ask for the rain for each month
	cout << "Enter the rainfall for " << month1 << ":\t";
	cin  >> rain_month1;
	
	cout << "Enter the rainfall for " << month2 << ":\t";
	cin  >> rain_month2;
	
	cout << "Enter the rainfall for " << month3 << ":\t";
	cin  >> rain_month3;
	
	//calculate the totals
	rain_average = (rain_month1 + rain_month2 + rain_month3) / 3;
	
	//display results to user
	cout << "Three-month Average Rainfall:\t" << rain_average;
	
	return 0;
}

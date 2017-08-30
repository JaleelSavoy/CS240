//this program display three rows of three columns
//using a specific output format
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	
	//display message to user
	cout << "Enter 6 integers and we will generate 3 using math operations: ";
	
	//store the values in these variables
	double num1, num2, num3, num4, num5, num6, sum, mult, div;
	
	//get user numbers
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

	//calculate the generated number
	sum  = num1 + num2;
	mult = num3 * num4;
	div  = num5 / num6;
	
	//display formatted output
	cout << setw(10) << num1 << setw(10) << num2
		 << setw(10) << sum << endl;
		 
	cout << setw(10) << num3 << setw(10) << num4
		 << setw(10) << mult << endl;
		
	cout << setw(10) << num5 << setw(10) << num6
		 << setw(10) << div << endl;
	
	//variables to store the values
	double day1, day2, day3, total;
	
	//get the values
	cout << "Now enter the sales for day 1: ";
	cin  >> day1;
	cout << "Now enter the sales for day 2: ";
	cin  >> day2;
	cout << "Now enter the sales for day 3: ";
	cin  >> day3;
	total = day1 + day2 + day3;
	
	//display the sales figures	
	cout << "Sales Figures" << endl << "------------" << endl;
	cout << setprecision(2) << fixed;
	cout << "Day 1:\t" << setw(8) << day1 << endl;
	cout << "Day 2:\t" << setw(8) << day2 << endl;
	cout << "Day 3:\t" << setw(8) << day3 << endl;
	cout << "Total:\t" << setw(8) << total << endl; 


	
	return 0;	 
}

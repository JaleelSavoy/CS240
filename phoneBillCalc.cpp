/***************************************************************
CSCI 240         Program 3     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: This program generates a billing amount 
		for a mock cell phone service providers.
***************************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
	
double price;
double minutes;
double overtimePrice;
char planUSER;
double minUSER;

double cost;



cout << "What package do you have (A, B, or C)?";
cin >> planUSER;
planUSER = toupper(planUSER);
cout << "How many minutes were used this month?";
cin >> minUSER;

if(planUSER == 'A'){
	price = 39.99;
	minutes = 450;
	overtimePrice = 0.45;
	cost = price;
}
else if(planUSER == 'B'){
	price = 59.99;
	minutes = 900;
	overtimePrice = 0.40;
	cost = price;
}
else if(planUSER == 'C'){
	price = 69.99;
	minutes = 1800;
	overtimePrice = 0.00;
	cost = price;
}
else{
	cout << "Error: Not Valid Package";
}

if(planUSER == 'A' and minUSER > minutes){
	cost = price + (minUSER - minutes) * overtimePrice;
	cout << "You are not within your minute allowance!" << endl;
	cout << "The bill is $" << fixed << setprecision (2) << cost;
	
}
else if(planUSER == 'B' and minUSER > minutes){
	cost = price + (minUSER - minutes) * overtimePrice;
	cout << "You are not within your minute allowance!" << endl;
	cout << "The bill is $" << fixed << setprecision (2) << cost;

}
else{
	cout << "You are within your minute allowance!" << endl;
	cout << "The bill is $" << fixed << setprecision (2) << cost;

}
}

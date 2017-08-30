/***************************************************************
CSCI 240         Program Tip Calc     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: This program performs simple multiplication of a fraction to generate appropriate tip amounts.
***************************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
double bill_Amount;
double customtip_Percent;
double five_Percent = 0.05;
double ten_Percent = 0.1;
double fifteen_Percent = 0.15;
double twenty_Percent = 0.2;
double twentyfive_Percent = 0.25;
double thirty_Percent = 0.30;


int num;

	cout << endl << "What is the bill total?" << endl;
	cin >> bill_Amount;
	cout << endl << "1: 	5%" << endl << "2:  	10%" << endl << "3:  	15%" << endl << "4:  	20%" << endl << "5:  	25%" << endl << "6:   	Custom Tip!";
	cout << endl << "How much would you like to tip? (select corresponding number or enter anything else to exit)" << endl;
	cin >> num;
	

	

	switch(num)

	{

		case 1: cout << "You should tip... 		$" << fixed << setprecision (2) << bill_Amount * five_Percent << endl;

		break;

	

		case 2: cout << "You should tip... 		$" << fixed << setprecision (2) <<  bill_Amount * ten_Percent << endl;

		break;
		

		case 3: cout << "You should tip... 		$" << fixed << setprecision (2) <<  bill_Amount * fifteen_Percent << endl;

		break;

		

		case 4: cout << "You should tip... 		$" << fixed << setprecision (2) <<  bill_Amount * twenty_Percent << endl;

		break;

		

		case 5: cout << "You should tip... 		$" << fixed << setprecision (2) <<  bill_Amount * twentyfive_Percent << endl;

		break;

		case 6: cout << "what is your custom tip percentage? As an integer (e.g. 20% would be 20)";
		cin >> customtip_Percent;
		customtip_Percent = customtip_Percent / 100;
		cout << endl <<"You should tip... $" << fixed << setprecision (2) << bill_Amount * customtip_Percent << endl;

		break;

		default: cout << "You do not want to tip...";

		}	

		


}




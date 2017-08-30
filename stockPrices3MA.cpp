//averages 3 days worth of closing stock prices and repeats as many times as the user wishes
#include <iostream>

using namespace std;

int main(){
	double stock1, stock2, stock3, average;			//three stock prices and average
	char again;										//to hold yes or no input
	
	do {
		
		//get the prices
		cout << "Enter the stock prices for three days (separated by spaces) and I will average them:\t";
		cin  >> stock1 >> stock2 >> stock3;
		
		//calculate and display the average
		average = (stock1 + stock2 + stock3) / 3.0;
		cout << "The average is " << average << "." << endl;
		
		//does the user want to average another set of three stock prices
		cout << "Do you want to average another set? (Y/N) ";
		cin  >> again;
	} while (again == 'Y' || again == 'y');
	
	return 0;
}

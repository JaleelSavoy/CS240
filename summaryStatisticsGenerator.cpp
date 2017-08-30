/***************************************************************
CSCI 240         Program 4     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: 	This program will calculate a set of statistics 
			for a small group of random numbers.
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h> 

using namespace std;
int main()

{
	//Set up the random number generator and...
	//determines how many values the program will use
	srand(time(0));
	int num = 2 + rand() % (10 - 2 + 1);
	cout << "The program will generate " << num << " numbers." << endl;
	
	//initializes the variables
	double num1;
	int count = num;
	int largest = 0;
	int smallest = 51;
	double sum = 0;
	double average = 0;
	double sumOfNumSq = 0;
	double sqOfSumNum = 0;

	cout << "The numbers are ";
	
	//logical loop to gather statistics on the values
	while(count != 0){
		num1 = 10 + rand() % (50 - 10 + 1);
		if(num1 > largest){
			largest = num1;
		}
		if(num1 < smallest){
			smallest = num1;
		}
		sum += num1;
		count -= 1;
		average = sum /num;
		sumOfNumSq += pow(num1, 2);
		cout << num1 << " ";
	}
	
	//calculate the standard deviation
	sqOfSumNum = pow(sum,2);
	float numerator = (sumOfNumSq - sqOfSumNum/num);	
	double stdev = sqrt(numerator/(num-1));
	
	
	//print information console
	cout << endl << "\tSmallest: \t\t" << smallest << endl;
	cout << "\tLargest: \t\t" << largest << endl;
	cout << "\tSum: \t\t\t" << sum << endl;
	cout << "\tAverage: \t\t" << fixed << setprecision(3) << average << endl;
	cout << "\tStandard Deviation: \t" << fixed << setprecision(3) << stdev;
	
}

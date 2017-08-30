/***************************************************************
CSCI 240         Program 4     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: 	This program will process 
			a data set of random numeric information
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
const double UPPER_BOUND = 100;
const double LOWER_BOUND = 0;
const int ARSIZE = 100;

double randDouble();
int buildArray( double array[] );
void printArray( double array[], int numberOfValues, int numberPerLine );
void sortArray( double array[], int numberOfValues );

int main() {
	double startArray[ARSIZE];
	srand(time(0));
	buildArray(startArray);
	sortArray(startArray, ARSIZE);
	printArray(startArray, ARSIZE, 10);	
}

int buildArray(double array[]){
	for(int i = 0; i < ARSIZE; i++){
		array[i] = rand() % 100 + 1;
	}
}

void printArray(double array[], int numberOfValues, int numberPerLine ){
	for(int i = 0; i < ARSIZE; i++){
		cout << array[i] << " ";
	}
}

void sortArray(double array[], int numberOfValues ){
	double smallest = 100;
	double tempLarge = 0;
	for(int i = 0; i < smallest; i++ ){
		for(int j = i + 1; j < numberOfValues; j++ ){
		}	if(array[i] > array[i + 1]){
				tempLarge = array[i];
				array[i] = array[i +1];
				array[i + 1] = tempLarge;
		}
	}
}

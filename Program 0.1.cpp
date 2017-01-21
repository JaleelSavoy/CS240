/***************************************************************
CSCI 240         Program 1     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: This program performs simple arithmetic calculations and
         displays the results.
***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
int first_number;
int second_number;

cout << endl << "This will be an addition calculation. What is your first number?";
cin >> first_number;
cout << endl << "Second number?";
cin >> second_number;
cout << endl << "The result is: ";
cout << first_number + second_number;

cout << endl << "This will be an subtraction calculation. What is your first number?";
cin >> first_number;
cout << endl << "Second number?";
cin >> second_number;
cout << endl << "The result is: ";
cout << first_number - second_number;

cout << endl << "This will be an multiplication calculation. What is your first number?";
cin >> first_number;
cout << endl << "Second number?";
cin >> second_number;
cout << endl << "The result is: ";
cout << first_number * second_number;

cout << endl << "This will be an division calculation. What is your first number?";
cin >> first_number;
cout << endl << "Second number?";
cin >> second_number;
cout << endl << "The result is: ";
cout << first_number / second_number;

cout << endl << "This will be an remainder calculation. What is your first number?";
cin >> first_number;
cout << endl << "Second number?";
cin >> second_number;
cout << endl << "The result is: ";
cout << first_number % second_number;
}

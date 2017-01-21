/***************************************************************
CSCI 240         Program 0.2     Spring 2017

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

cout << endl << "This program will calculate the addition, subtraction, multiplication, division, and modulo for your chosen integers." << endl << "What is your first integer?";
cin >> first_number;
cout << endl << "Second integer?";
cin >> second_number;
cout << endl << "Let's get started!";

cout << endl << first_number << " + " << second_number << " = " << first_number + second_number;

cout << endl << first_number << " - " << second_number << " = " << first_number - second_number;

cout << endl << first_number << " * " << second_number << " = " << first_number * second_number;

cout << endl << first_number << " / " << second_number << " = " << first_number / second_number;

cout << endl << first_number << " % " << second_number << " = " << first_number % second_number;

cout << endl << second_number << " / " << first_number << " = " << second_number / first_number;

cout << endl << second_number << " % " << first_number << " = " << second_number % first_number;

cout << endl << second_number << " - " << first_number << " = " << second_number - first_number;

}

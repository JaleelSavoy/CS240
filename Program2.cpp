/*
CSCI 240		Program 2		Fall 2016

Programmer:		Jaleel Savoy

Section:		None

Date Due: 		Whenever

Purpose: This program calculates the number of singles and total number of bases for a baseball
			Also, colculate slugging percentage.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int hits;
	int doubles;
	int triples;
	int homeRuns;
	int atBat;
	
	cout << endl << "How many hits did you get?";
	cin >> hits;
	
	cout << endl << "How many doubles did you get?";
	cin >> doubles;
	
	cout << endl << "How many triples did you get?";
	cin >> triples;
	
	cout << endl << "How many homeruns did you get?";
	cin >> homeRuns;
	
	
	int singles = (hits) - (doubles) - (triples) - (homeRuns);
	int bases = singles + (doubles * 2) + (triples * 3) + (homeRuns * 4);

	cout << endl << "What is your number of at bats?";
	cin >> atBat;		

	double slug;
	slug = (double)bases / (double)atBat;
			
	cout << endl << "You have " << hits << " hits, " << singles << " singles, " << doubles << " doubles, " << triples << " triples, and " << homeRuns << " homeruns!";
	cout << endl << "You have earned a total number of bases of: " << bases;	
	cout << endl << "Your slugging percentage is: " << fixed << setprecision (3) << slug;
 } 


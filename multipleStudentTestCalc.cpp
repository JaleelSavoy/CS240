//average the test score of multiple students
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int numStudents,	//number of students
		numTests;		//number of tests per students
		
	double 	total,		//accumulator for total score
		   	average;	//average test score
		   	
	//set up output formatting
	cout << fixed << showpoint << setprecision(2);
	
	//get the number of students
	cout << "This program averages test sore." << endl;
	cout << "For how many students do you have scores? ";
	cin  >> numStudents;
	
	//get the number of test scores per student
	cout << "How many test scores does each student have? ";
	cin  >> numTests;
	
	//determine each student's average score
	for (int student = 1; student <= numStudents; student++){
		total = 0;		//initialize the accumulator
		for (int test = 1; test <= numTests; test++){
			double score;
			cout << "Enter score " << test << " for ";
			cout << "student " << student << ": ";
			cin  >> score;
			total += score;
		}
		average = total / numTests;
		cout << "This average score for student " << student;
		cout << " is " << average << "." << endl;
	}
	
	return 0; 
}

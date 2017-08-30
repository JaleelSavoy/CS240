//test average with 1 decimal point of precision, fixed-point notation exercise
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	//variables to store values
	double score1, score2, score3, score4, score5, total;
	
	//ask what the score of each test
	cout << "Enter the score for test 1: \t";
	cin  >> score1;
	cout << "Enter the score for test 2: \t";
	cin  >> score2;
	cout << "Enter the score for test 3: \t";
	cin  >> score3;
	cout << "Enter the score for test 4: \t";
	cin  >> score4;
	cout << "Enter the score for test 5: \t";
	cin  >> score5;
	
	//calculate the totals
	total = (score1 + score2 + score3 + score4 + score5) / 5;
	
	//display results to user
	cout << setprecision(1) << fixed << "The average is:\t" << total;
	
	return 0;
}

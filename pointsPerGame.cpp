//this program calculates the total number of points a basketball player
//has earned over a series of games and then their average
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double game = 1,		//game counter
		points,			//to hold a number of points
		total = 0;		//accumulator
		
	double average; 		//average the points
		
	cout << "Enter the number of points you have earned, and enter -1 when finished" << endl;
	cout << "Enter the points for game " << game << ":\t\t";
	cin  >> points;
	cout << setprecision(2) << fixed;
	
	while (points != -1){
		total += points;
		game++;
		cout << "Enter the points for game " << int(game) << ":\t\t";
		cin  >> points;
		average = total / game;
	}
	cout << endl << "The total points are " << total << endl;
	cout << endl << "The average is " << average << " over " << int(game - 1) << " games.";
 	
	return 0;
}

//small program to assign a letter gra
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	//variable to run through program again
	char ans;
	
	//constants to store grade values
	const int A_SCORE = 90,
			  B_SCORE = 80,
			  C_SCORE = 70,
			  D_SCORE = 60,
			  MAX_SCORE = 100,
			  MIN_SCORE = 0;
	
	//variable to hold testScore
	int testScore;
	
	getChoice:
	//get the numeric test score
	cout << "Enter your numeric test score and I will \n" <<
			"tell you the letter grade you earned." << endl;
	cout << "Enter the score here:\t\t\t"; 
	cin  >> testScore;
	
	//validate the input and determine the grade
	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE){

		//if-elseif-else to determine letter grade
		if (testScore >= A_SCORE){
			cout << "Your grade is A." << endl;
		}
		else if (testScore >= B_SCORE){
			cout << "Your grade is B." << endl;
		}
		else if (testScore >= C_SCORE){
			cout << "Your grade is C." << endl;
		}
		else if (testScore >= D_SCORE){
			cout << "Your grade is D." << endl;
		}	
		else {
			cout << "You have failed with an F...";
		}
		
		if (testScore >= A_SCORE || testScore >= B_SCORE ||testScore >= C_SCORE){
			cout << "Congrats you passed!" << endl;
		}
		else if (testScore == D_SCORE){
			cout << "You passed but you could do better." << endl;
		}
		else{
			cout << "You will need to retake this..." << endl;
		}
		
		if (testScore >= B_SCORE && testScore<= A_SCORE){
			cout << "Keep trying for the A!" << endl;
		}
	}
	else{
		//invalid score was entered
		cout << "That is an invalid score. Run the program again and enter valid value. " <<
				"Must be in the range of " << MIN_SCORE << " through " << MAX_SCORE << "."<< endl;
	}
	
	cout << "Do you want to run through the program again? 'y' for yes 'n' for no.." << endl;
	cin  >> ans;
	
	if (ans == 'y'){
		goto getChoice;
	}
	else{
		return 0;
	}
		
	return 0;
}

// program to display a theater menu and calculate ticket charges
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int choice, movies;		//hold a menu choice and number of months
	double charges;			//hold the monthly charges
	char ans;				//to run through program again
	
	// constants for membership rates
	const double ADULT =  40.0,
				 SENIOR = 30.0,
				 CHILD =  20.0;
	
	//constants for menu choices
	const int ADULT_CHOICE  = 1,
			  CHILD_CHOICE  = 2,
			  SENIOR_CHOICE = 3,
			  QUIT_CHOICE   = 4;
	
	getChoice:		  
	//display the menu and get a choice
	cout << "\t\tMovie Ticket" << endl << endl
		 << "1. Adult Standard Ticket" << endl
		 << "2. Child Ticket" << endl
		 << "3. Senior Ticket" << endl
		 << "\t\t 4. QUIT PROGRAM" << endl;
		 
	cout << "Enter your choice:\t";
	cin  >> choice;
	
	//set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	
	//respond to user's menu selection
	if (choice == ADULT_CHOICE){
		cout << "How many movies?\t";
		cin  >> movies;
		charges += (movies * ADULT);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == CHILD_CHOICE){
		cout << "How many movies?\t";
		cin  >> movies;
		charges += (movies * CHILD);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == SENIOR_CHOICE){
		cout << "How many movies?\t";
		cin  >> movies;
		charges += (movies * SENIOR);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == QUIT_CHOICE){
		cout << "PROGRAM ENDING..." << endl;
	}
	else {
		cout << "The valid choices are 1 through 4. Run the program again " <<
				"and select a valid option.";
	}
	
	cout << "Do you want to run through the program again? 'y' for yes 'n' for no.." << endl;
	cin  >> ans;
	
	if (ans == 'y'){
		goto getChoice;
	}
	else{
		return 0;
	}
}

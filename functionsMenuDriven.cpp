//functions in a menu-driven program
//simple example program
#include <iostream>
#include <iomanip>

using namespace std;


void showMenu();
void showFees(double, int);

int main(){
	
	int choice;			//holds a menu choice
	int tickets;		//holds a number of tickets
	
	//constants for menu choice
	const int  	ADULT_CHOICE  = 1,
				CHILD_CHOICE  = 2,
				SENIOR_CHOICE = 3,
				QUIT_CHOICE   = 4;
	
	//constants for movie ticket prices
	const double ADULT  = 40.0,
				 CHILD  = 20.0,
				 SENIOR = 30.0; 
	
	//numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	
	do{
		//display the menu and get the user's choice
		showMenu();
		cin >> choice;
		
		//validate the menu selection
		while (choice < ADULT_CHOICE || choice > QUIT_CHOICE){
			cout << "Please enter a valid menu choice:\t";
			cin  >> choice;
		}
		
		//if the user does not quit, proceed
		if (choice != QUIT_CHOICE){
			//get the number of tickets
			cout << "How many tickets?" << endl;
			cin  >> tickets;
			
			//display the rates
			switch (choice){
				case ADULT_CHOICE:
					showFees(ADULT, tickets);
					break;
				case CHILD_CHOICE:
					showFees(CHILD, tickets);
					break;
				case SENIOR_CHOICE:
					showFees(SENIOR, tickets);
					break;
			}
		}
	} while (choice != QUIT_CHOICE);
	return 0;
}


//**********************************************************
// definition of showMenu which displays the menu to the user
//**********************************************************

void showMenu(){
	cout << endl <<"\t\tSavoy Movie Theater Menu" << endl << endl
	<< "\t1. Standard Adult Ticket" << endl
 	<< "\t2. Child/Student Ticket" << endl
 	<< "\t3. Senior Citizen Ticket" << endl
 	<< "\t4. Quit the Program" << endl << endl
 	<< "\t\tEnter your choice: "; 
}


//**********************************************************
// definition of showFees which displays the total cost
//**********************************************************

void showFees(double memberRate, int tickets){
	cout << "The total charges are $" << (memberRate * tickets) << endl;
}

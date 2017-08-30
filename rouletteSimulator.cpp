/***************************************************************
CSCI 240         Program 4     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: 	This program will simulate a game of Roulette
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h> 

using namespace std;
int main()
{
	srand(time(0));
	int num = 0 + rand() % (36 + 1);
	int num1 = 1 + rand() % (4 - 1);
	char bet;
	int result;
	int play = 1;
	char color;
	int numberBet;
	
	
	while(play == 1){
		cout << "What type of bet would you like" << endl;
   		cout << "(S = Single number, R = Red, B = Black, E = Even, O = Odd)?";
   		cin >> bet;
   		if(num1 == 1){
   			color = 'R';
		   }
		else if(num1 == 2){
   			color = 'B';
		   }
		else{
			color = 'G';
		}
   		
   		switch(bet){
   			case 'S': 
   				cout << "What number would you like bet on (0 - 36)?" <<endl;
   				cin >> numberBet;
   				cout << "The wheel is spinning....and landed on " << num <<endl;
				if(numberBet == num) {
					cout << "YOU WON!" << endl;
				}
				else{
					cout << "YOU LOST!" << endl;				
				}
				break;
   			case 'R':
   				cout << "The wheel is spinning...and landed on " << color << endl;
   				if(color == bet){
   					cout << "YOU WON!" << endl;
				   }
				else{
					cout << "YOU LOST!" << endl;
				}
				break;
   				
   			case 'B':
   				cout << "The wheel is spinning...and landed on " << color << endl;
   				if(color == bet){
   					cout << "YOU WON!" << endl;
				   }
				else{
					cout << "YOU LOST!" << endl;
				}
				break;

   			case 'E':
   				cout << "The wheel is spinning...and landed on " << num << endl;
   				if(num % 2 == 0){
   					cout << "YOU WON!" << endl;
				   }
				else{
					cout << "YOU LOST!" << endl;
				}
				break;

   			case 'O':
   				cout << "The wheel is spinning...and landed on " << num << endl; 
   				if(num % 2 != 0){
   					cout << "YOU WON!" << endl;
				   }
				else{
					cout << "YOU LOST!" << endl;
				}
				break;
		   }
		cout << "Want to play more? 1) Yes 2) No";
		cin >> play;
	}

}
	

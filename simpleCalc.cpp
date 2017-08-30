/***************************************************************
CSCI 240         Program 6     Spring 2017

Programmer: Jaleel Savoy

Section: NA

Date Due: NA

Purpose: This program performs simple arithmetic calculations and
         displays the results.
***************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
char operation; 
int num1, num2, result, remain;


//Display the menu to the user and get their first choice


//While the user does not want to quit

while( operation != 'q' and operation != 'Q' )
  {
  	cout << endl << "What operation would you like to perform:" << endl
     << "  + addition\n  - subtraction\n  * multiplication\n  / division\n  ^ number to power\n  ! factorial"
     << "\n  q quit"
	 << endl << endl << "Operation? ";

	cin >> operation;
  	//Addition operation
	 switch(operation){
	 	case '+':
	 		
	    	//Get two numbers from the user
	    	cout << endl << "What is the first number to add? ";
	    	cin >> num1;
	
	    	cout << endl << "What is the second number to add? ";
	    	cin >> num2;
	    
	    	//Add the numbers together
	    	result = num1 + num2;
	    
	    	//Display the result of the addition
	    	cout << endl << num1 << " + " << num2 << " = " << result;
	    	break;
	    
	    case '-':
	    	//Get two numbers from the user
	    	cout << endl << "What is the first number to subtract? ";
	    	cin >> num1;
	
	    	cout << endl << "What is the second number to subtract? ";
	    	cin >> num2;
	    
	    	//Subtract the second number from the first number
	    	result = num1 - num2;
	    
	    	//Display the result of the subtraction
	    	cout << endl << num1 << " - " << num2 << " = " << result;
	    	break;
	    	
	    case '*':
	    	//Get two numbers from the user
	    	cout << endl << "What is the first number to multiply? ";
	    	cin >> num1;
	
	    	cout << endl << "What is the second number to multiply? ";
	    	cin >> num2;
	    
	    	//Multiply the numbers together
	    	result = num1 * num2;
	    
	    	//Display the result of the multiplication
	    	cout << endl << num1 << " * " << num2 << " = " << result;
			break;
			
		case '/':
			//Get two numbers from the user
	   	 	cout << endl << "What is the dividend? ";
	    	cin >> num1;
	
	    	cout << endl << "What is the divisor? ";
	    	cin >> num2;
	    
	    	//Divide the first number by the second number, calculating both the quotient
	    	//and the remainder
	    	result = num1 / num2;
	    	remain = num1 % num2;
	
	    	//Display both results of the division
	    	cout << endl << num1 << " / " << num2 << " = " << result
		     	<< endl << num1 << " % " << num2 << " = " << remain;
		   break;
	
		case '^':
			//Get two numbers from the user. The first number is the base value. The second
	    	//number is the power.
	    	cout << endl << "What is the base number? ";
	    	cin >> num1;
	
	    	cout << endl << "What is the power? ";
	    	cin >> num2;
	
	    	//Calculate the result of raising the first number (num1) to a power (the
			//second number)    
	    	result = 1;
	
	    	for( int cnt = 1; cnt <= num2; cnt++ )
	      	{
	      		result *= num1;
	      	}
	    
	    	//Display the result
	    	cout << endl << num1 << "^" << num2 << " = " << result;
	    	break;
		
	 	case '!':
		    //Get the number to use in the calculation from the user
		    cout << endl << "What is the number? ";
		    cin >> num1;
		
		    //Calculate the result of multiplying 1 times each value through the number
		    //entered by the user.
		    result = 1;
		
		    for( int cnt = 2; cnt <= num1; cnt++ )
		      {
		      result *= cnt;
		      }
		    
		    //Display the result
		    cout << endl << num1 << "! = " << result;
		    break;
			
	
		  //Invalid operation
		  //Display an error message
		  default: 
			    {
			    cout << endl << "That is an invalid operation!";
				}
			
			  cout << endl;
			  
			  //Display the menu to the user and get their next operation choice
			  cout << endl << "What operation would you like to perform:" << endl
			       << "  + addition\n  - subtraction\n  * multiplication\n  / division\n  ^ number to power\n  ! factorial"
			       << "\n  q quit"
				   << endl << endl << "Next Operation? ";
			  cin >> operation;
			  break;
			
		
	return 0;
}
}
}


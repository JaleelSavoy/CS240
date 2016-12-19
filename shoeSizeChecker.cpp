//shoe size checker
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double size;
	
	cout << "Enter your shoe size (5 to 18)" << endl; //this is the initial prompt
	cin >> size;
	
	while (size < 5 || size > 18)
	{
		cout << "Invalid: Shoe size must be in range 5 to 18; try again: " << endl;
		cin >> size;		
	}
	cout << "You entered: " << size << "." << "This is correct?" << endl;
	string answer;
	cin >> answer;
	
	if (answer == "Y" || answer == "y")
	{
		cout << "Thanks for your answer, have a nice day!";	
	}
	else
	{
		cout << "Sorry, there has been an issue. Try again.";
	}	
}

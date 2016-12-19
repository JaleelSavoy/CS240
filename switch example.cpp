//switch example
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	cout << "How happy are you? (Enter an integer between 1 and 5, with 1 being unhappiest and 5 being the happiest)";
	cin >> num;
	
	switch(num)
	{
		case 1: cout << "You are extremely unhappy." << endl;
		break;
	
		case 2: cout << "You are pretty unhappy." << endl;
		break;
		
		case 3: cout << "You are neither happy or unhappy" << endl;
		break;
		
		case 4: cout << "You are pretty happy" << endl;
		break;
		
		case 5: cout << "You are extremely happy!" << endl;
		break;
		
		default: cout << "You did not enter an integer between 1 and 5...";
		}	
		
}

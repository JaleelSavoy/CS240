//switch statement alternative
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char gradeLetter;
	string result;
	
	cout << "What grade did you receive? (a, b, c, d, e, f, i, n, w):  ";
	cin >> gradeLetter;
	
	switch (gradeLetter)
	{
		case 'a': result = "Excellent!";
		break;
		
		case 'b': result = "Pretty good";
		break;
		
		case 'c': result = "Passed";
		break;
		
		case 'd': result = "Technically passed";
		break;
		
		case 'f':
		case 'i': result = "Fail";
		break;
		
		case 'n':
		case 'w': result = "Other";
		break;
		
		default: 	result = "Pick a valid option";
	}
	cout << result;
}

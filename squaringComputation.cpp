//compound OR and If conditions
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Lets start with a number: 2" << endl;
	long double n = 2;
	
	string response;
	cout << "Would you like to multiple it by itself? (y/n)" << endl;
	cin >> response;
	
	do
	{
		n = n * n;
		cout << "n is now: " << n << endl;
		cout << "Another time? (y/n)" << endl;
		cin >> response;
	}
	while (response == "y" || response == "Y");
}

//function to raise an integer to an integer power
#include <iostream>
#include <iomanip>

using namespace std;

int n_tothe_i(int n, int i) //the two arguments passed here
{
	int ndx;
	int temp;
	
	//temp = n to the first power
	
	temp = n;
	
	//now multiply temp by n i-1 times
	for (ndx = 1; ndx < i; ndx++)
		temp *= n;
	return(temp);
}

int main ()
{
	int n;
	int i;
	cout << "What is your number?: " << endl;
	cin >> n;
	cout << "Raise it to what?: " << endl;
	cin >> i;
	
	cout << n_tothe_i(n, i);
}

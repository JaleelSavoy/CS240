//display the numbers 1 through 10 and their squares
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	const int MIN_NUMBER = 1,		//starting value
			  MAX_NUMBER = 100;		//ending value
	
	int num;
	
	cout << "Num\tNum Squared" << endl;
	cout << "----------------------" << endl;
	
	for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
		cout << num << "\t\t" << (pow(num, 2)) << endl;
		
		
	return 0;
	
}

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int i;
	
	for (i = 0; i <= 10; i++)
	{
		cout << i;		//display integers -0 through 10
	}

	int i1;
	int num = 1; 
	
	for (i1 = 1; i1 <= 5; i1++){
		cout << "The square of " << num << " is " << num*num << endl;
		num +=2;
	}
}



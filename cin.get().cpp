//this program demonstrates three way 
//to use cin.get() to pause a progam
#include <iostream>
using namespace std;

int main(){
	
	char ch;
	char op;
	
	cout << endl << "This program has paused. Press Enter to continue.";
	cin.get(ch);
	cout << endl << "This program has paused again. Press Enter to continue";
	cin.get(op);
	cout << endl << "Thank you!";
	
	return 0;
}

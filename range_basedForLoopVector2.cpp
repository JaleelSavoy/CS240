//this program demonstrates teh range-based for loop with a vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	//define and initializer a vector
	vector<int> numbers(5);
	
	//get values for the vector elements
	for (int &val : numbers){
		cout << "Enter an integer value: ";
		cin  >> val;
	}
	
	//display the vector element
	cout << "Here are the values you entered: " << endl;
	for (int val : numbers){
		cout << val << endl;
	}
	
	return 0;
}

//linear search function example
//inefficient for large lists (slow since it checks sequentially)
#include <iostream>
using namespace std;

//function prototype
int searchList(const int[], int, int);
const int SIZE = 5;

int main(){
	int tests[SIZE];
	cout << "Enter 5 values in any order: ";
	cin  >> tests[0] >> tests[1] >> tests[2] >> tests[3] >> tests[4];
	int results;
	
	//search array for a value
	int lookFor;
	cout << "What value do you want to look for? Enter here: ";
	cin  >> lookFor;
	
	results = searchList(tests, SIZE, lookFor);
	
	//if searchList returned -1, then no 100 was found
	if(results == -1){
		cout << "Value not found" << endl;
	}
	else{
		cout << "Value found at position " << results << " (remember the index starts at zero)" << endl;
	}
}

int searchList(const int list[], int numElems, int value){
	int index = 0;
	int position = -1;
	bool found = false;
	
	while (index < numElems && !found){
		if(list[index] == value){
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

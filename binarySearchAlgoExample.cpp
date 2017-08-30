//binary search algo example
#include <iostream>
using namespace std;

//function prototype
int binarySearch (const int [], int, int);
const int SIZE = 28;

int main(){
	//array with employee IDs sorts in ascending order
	int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
						234, 242, 210, 310, 388, 399, 400,
						417, 429, 447, 521, 536, 550, 600};
						
	int results;
	int empID;
	
	//get employee ID to search for
	cout << "Enter the employee ID you wish to search for:\t";
	cin  >> empID;
	
	//search for the ID
	results = binarySearch(idNums, SIZE, empID);
	
	//if results contains -1 the ID was found
	if (results == -1){
		cout << "That number does not exist in the array" << endl;
	}
	else{
		cout << "ID found at element " << results;
		cout << " in the array";
	}
	
	return 0;
}

//binarySearch function performs a binary search on an int array
//if value is not found, then -1 is returned. otherwise the array element of the found value is returned
int binarySearch( const int array[], int size, int value){
	int first = 0,
	 	last = size - 1,
		middle, 
		position = -1;
	bool found = false;
	
	while (!found && first <= last){
		middle = (first + last) / 2;
		if (array[middle] == value) {
			found = true;
			position = middle;
		}
		else if (array[middle] > value){
			last = middle - 1;
		}
		else{
			first = middle + 1;
		}
	}
	return position;
}

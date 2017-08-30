//bubble sort list example; inefficient in large arrays
#include <iostream>

using namespace std;

//function prototype
void sortArray(int [], int);
void showArray(const int [], int);

int main(){
	//array of unsort values
	int values[6];
	cout << "Enter 6 values and we will sort them: ";
	cin  >> values[0] >> values[1] >> values[2] >> values[3] >> values[4] >> values[5];
	
	//display the values
	cout << "The unsorted entries are " << endl;
	showArray(values, 6);
	
	//sort the array
	sortArray(values, 6);
	
	//display the sorted results
	cout << "The result of the sort: " << endl;
	showArray(values, 6);
	
	return 0;
	
}

//sortArray uses bubble sort to put the array in ascending order
void sortArray (int array[], int size){
	bool swap;
	int temp;
	
	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++){
			if (array[count] > array[count + 1]){
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	}	while (swap);
}

void showArray (const int array[], int size){
	for (int count = 0; count < size; count++){
		cout << array[count] << " " << endl;
	}
}

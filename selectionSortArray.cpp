//selection sort algorithm; better for larger arrays
#include <iostream>

using namespace std;

//function prototype
void selectionSortArray(int [], int);
void showArray(const int [], int);

int main(){
	//array of unsort values
	const int SIZE = 6;
	int values[SIZE];
	cout << "Enter 6 values and we will sort them: ";
	cin  >> values[0] >> values[1] >> values[2] >> values[3] >> values[4] >> values[5];
	
	//display the values
	cout << "The unsorted entries are " << endl;
	showArray(values, SIZE);
	
	//sort the array
	selectionSortArray(values, SIZE);
	
	//display the sorted results
	cout << "The result of the sort: " << endl;
	showArray(values, SIZE);
	
	return 0;
	
}

//sortArray uses selection sort to put the array in ascending order
void selectionSortArray (int array[], int size){
	int startScan, minIndex, minValue;
	
	for(startScan = 0; startScan < (size - 1); startScan++){
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++){
			if (array[index] < minValue){
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

void showArray (const int array[], int size){
	for (int count = 0; count < size; count++){
		cout << array[count] << " " << endl;
	}
}

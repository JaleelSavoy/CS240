//stadium seating small programming exercise
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	//variables to store values
	double classASeatCost = 15.00, classBSeatCost = 12.00, classCSeatCost = 9.00,
		totalA, totalB, totalC, total;
	int seatsSoldA, seatsSoldB, seatsSoldC;
	
	//ask how many tickets were sold in each category
	cout << "How many seats were sold in each category?" << endl;
	cout << "A Seating: \t";
	cin  >> seatsSoldA;
	cout << "B Seating: \t";
	cin  >> seatsSoldB;
	cout << "C Seating: \t";
	cin  >> seatsSoldC;
	
	//calculate the totals
	totalA = classASeatCost * seatsSoldA;
	totalB = classBSeatCost * seatsSoldB;
	totalC = classCSeatCost * seatsSoldC;
	total = totalA + totalB + totalC;
	
	//display results to user
	cout << "Total generated from sales: \t" << setprecision(02) << fixed << total;
	
	return 0;
}

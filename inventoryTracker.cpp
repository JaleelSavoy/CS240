//this program tracks the inventory of three widget stores
//that opened at the same time. each store started with the
//same number of widgets in inventory. by subtracting the
//number of widget each store has from its inventory,
//the current inventory can be calculated
#include <iostream>
using namespace std;

int main(){
	int begInv,		//beginning inventory for all stores
		sold, 		//number of widgets sold
		store1, 	//store 1's inv
		store2,		//store 2's inv
		store3;		//store 3's inv
	
	//get the beginning inventory for all the stores
	cout << "One week age, 3 new widget stores opened\n";
	cout << "at the same time with the same beginning\n";
	cout << "inventory. What was the beginning inventory? ";
	cin  >> begInv;
	
	//set each store's inventory
	store1 = store2 = store3 = begInv;
	
	//get the number of widgets sold at store1
	cout << "How many widgets has store 1 sold? ";
	cin  >> sold;
	store1 -= sold; 	//adjusts store 1's inv
	
	//repeat for store 2
	cout << "How many widgets has store 2 sold? ";
	cin  >> sold;
	store2 -= sold;
	
	//repeat for store 2
	cout << "How many widgets has store 3 sold? ";
	cin  >> sold;
	store3 -= sold;
	
	//display each of the store's current inventory
	cout << endl << "The current inventory of each store: " << endl;
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;
	cout << "Store 3: " << store3 << endl;
	
	return 0;
}

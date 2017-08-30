//this program calculates the sale price of an item
//that would have a discountsubtracted from the final price
#include <iostream>
using namespace std;

int main(){
	//variables to hold the regular price, the discount, and final sales price
	double regularPrice, discount, salePrice, savings;
	
	//display message to the user
	cout << "This program will calculate the sales price of discounted items." << endl;
	
	//prompt user to enter the discount
	cout << "Enter the discount percentage as a decimal: ";
	cin  >> discount;
	
	//prompt user to enter the regularPrice
	cout << "Enter the regular price of the item: $";
	cin  >> regularPrice;
	
	//calculate the salePrice
	salePrice = regularPrice - (regularPrice * discount);
	cout << "The final sales price is $" << salePrice << endl;
	
	//calculate the savings
	savings = regularPrice * discount;
	cout << "The total savings are $" << savings << endl;
	
	return 0;
}


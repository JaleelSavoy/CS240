#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	//variables to store the relevant values
	char ch, ans;
	const double COST_PER_CUBIC_FOOT = 0.23, CHARGE_PER_CUBIC_FOOT = .50;
	double length, width, height, volume, cost, charge, profit;
	
	//Greet the user
	cout << "Welcome to CrateMate, trademark by Savoy Research Corp." << endl;
	cout << "We will help you calculate volume, cost, price, and profit of any crate!" << endl;
	cout << "Press any key to continue..." << endl;
	cin.get(ch);
	
	program:
	//ask the user to enter the crate dimensions
	cout << "What are the dimensions of the crate separated by spaces." << endl;
	cout << "Enter in the order of length, width, and height: ";
	cin  >> length >> width >> height;
	
	//calculate volume of the crate
	volume = length * width * height;
	
	//calculate the cost, charge, adn profit of the crate
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;
	
	//display the final result to the user
	cout << "Profit: \t" << setw(10) << profit << endl;
	cout << "Charge: \t" << setw(10) << charge << endl;
	cout << "Cost: \t\t" << setw(10) << cost << endl;
	cout << "Length: \t" << setw(10) << length << endl;
	cout << "Width: \t\t" << setw(10) << width << endl;
	cout << "Height: \t" << setw(10) << height << endl;

	//Prompt user if they have another order
	cout << "Do you have another order? Enter y for yes: ";
	cin  >> ans;
	if (ans == 'y'){
		goto program;
	}
	
	return 0;
}

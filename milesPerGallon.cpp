//miles per gallon small programming exercise
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	//variables to store values
	double fullTankGallons, milesPerTank, milesPerGallon;
	
	//get the gallons per full tank
	cout << "Enter the amount of gallons your tank can hold:\t" << endl;
	cin  >> fullTankGallons;
	
	//get the miles per tank
	cout << "Enter the amount of miles a full tank gets:\t" << endl;
	cin  >> milesPerTank;
	
	//calculate the MPG
	milesPerGallon = milesPerTank / fullTankGallons;
	
	//display result
	cout << "Miles Per Gallon: \t" << milesPerGallon;	

	return 0;
}

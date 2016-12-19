#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int credits;
	string classStanding;
	
	cout << endl << "Enter number of credit hours: ";
	cin >> credits;
	
	if (credits >= 90)
	{
		classStanding = "Senior";
	}
	else if (credits >= 60)
	{
		classStanding = "Junior";
	}
	else if (credits >= 30)
	{
		classStanding = "Sophomore";
	}
	else if (credits >= 0)
	{
		classStanding = "Freshman";
	}
	else
	{
		classStanding = "Error: ....";
	}
	cout << endl << "Class is: " << classStanding;
}

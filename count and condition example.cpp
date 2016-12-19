#include<iostream>
#include<istream>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{

	int scholars;
	string town;
	int studentsPerSchool1;
	int studentsPerSchool2;
	int studentsPerSchool3;
	int sPSCount = studentsPerSchool1+studentsPerSchool2+studentsPerSchool3;
	
	cout << "Enter the name of your town: " << endl;
	cin >> town;
	
	cout << endl << "LOL, you are from, "  << town << "?!" << endl;
	cout << endl << "Okay, how many scholars are in your neighborhood?" << endl;
	cin >> scholars;
	
	if( scholars < 15){
		cout << "WAY TOO FEW!" << endl;
	}else {
		cout << "VERY IMPRESSIVE!" << endl;
	}
	
	cout << "How many people are in your school?" << endl;
	cin >> studentsPerSchool1;
	
	cout << "And the in the other school?" << endl;
	cin >> studentsPerSchool2;
	
	cout << "And the third school?" << endl;
	cin >> studentsPerSchool3;
	

	if (sPSCount < 100){
		cout << "Why are you still there?";
	}else {
		cout << "Pretty impressive...";
	}
}

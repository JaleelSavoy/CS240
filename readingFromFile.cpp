//this program reads data from a file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	ifstream inputFile;
	string name;
	
	inputFile.open("demoFile.txt");
	cout << "Reading data from the file..." << endl;
	
	inputFile >> name; 		//read the first line from the file
	cout << name << endl;	//display it
	
	inputFile >> name; 		//read the second line from the file
	cout << name << endl;	//display it
	
	inputFile >> name; 		//read the third line from the file
	cout << name << endl;	//display it
	
	inputFile >> name; 		//read the fourth line from the file
	cout << name << endl;	//display it
	
	return 0;
}

//this program writes data to a file
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream outputFile;
	outputFile.open("demoFile.txt");
	
	cout << "Now writing data to the file." << endl;
	
	//write four names to the file
	outputFile << "Bach" << endl;
	outputFile << "Beethoven" << endl;
	outputFile << "Mozart" << endl;
	outputFile << "Schubert" << endl;
	
	//close the file
	outputFile.close();
	cout << "Done" << endl;
	
	
	return 0;
}


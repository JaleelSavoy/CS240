//compound conditions
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int ptX, ptY;
	int rectLeft, rectRight, rectTop, rectBot;
	
	cout << "The rectangle's bottom left point is the origin." << endl;
	rectLeft = 0, rectBot = 0;
	cout << "The rectangle is 15 units tall." << endl;
	rectTop = 15;
	cout << "The rectange is 30 units wide" << endl;
	rectRight = 30;
	
	cout << "What is your X coordinate?: " << endl;
	cin >> ptX;
	
	cout << "What is your Y coordinate?: " << endl;
	cin >> ptY;	
	if (ptX > rectLeft && ptX < rectRight && ptY > rectBot && ptY < rectTop)
	{
		cout << "Point is in the rectangle";
	}
	else
	{
		cout << "Point is not in the rectangle";
	}
}

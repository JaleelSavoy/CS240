#include <iostream>
#include <iomanip>

using namespace std;

#define TAX_RATE		0.0625		//CAPS by convention
#define INDENT_PRCNT	0.0625		//diff meaning; same value

int main()
{
	double total;
	double x;
	double amt;
	
	//0.0625 replaces TAX_RATE
	total = amt + amt*TAX_RATE;
	
	//0.0625 INDENT_PRCNT
	x = 2 * INDENT_PRCNT;
	
	//then next is illegal: equivalent to 0.0625 = 0.07 and generates an error
	
	TAX_RATE = 0.07;
	
}

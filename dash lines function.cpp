//display dashed lines function
#include <iostream>

using namespace std;

	void lines(int n)
	{
		int i; 
		
		cout << endl;
		
		for (i = 1; i <= n; i++)
			cout << "-";
			
		cout << endl;
		
		for (i = 1; i <= n; i++)
			cout << "-";
		}

int main ()
{
	lines(9);
}

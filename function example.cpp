//function
#include <iostream>
#include <iomanip>

using namespace std;

int cube ( int x )
{
	int result;
	
	result = x * x * x;
	
	return result;
}
int main()
{
int num, ans;
num = 2;
ans = cube (num);
cout << ans << endl;

ans = cube(ans);
cout << ans << endl;

ans = cube(3);
cout << ans << endl;

cout << cube(ans/3);
}

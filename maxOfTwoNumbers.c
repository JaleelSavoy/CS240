//if-then-else example
/* take two numbers as input from user
	display the max number
*/
#include<stdio.h>

int main(){
	int a;
	int b;
	
	printf("enter the first integer: \n");
	scanf("%d", &a);
	
	printf("enter the second integer: \n");
	scanf("%d", &b);
	
	int max = a > b ? a:b;
	
	printf("the greater number is: %d", max);
	
	return 0;
	
}
	

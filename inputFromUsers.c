//if-then-else example
/* take two numbers as input from user
	if both are greater than 100, then indicate such in a message
	if only one is greater than 100, then indicate such in a message
	if both are less than 100, then indicate such in a message
*/
#include<stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("enter the first number: \n");
	scanf("%d", &num1);
	
	printf("enter the second number: \n");
	scanf("%d", &num2);
	
	if(num1 > 100 && num2 > 100){
		printf("both are greater than 100, and they are %d & %d", num1,num2);
	}
	else if(num1 > 100 ){
		printf("one number is greater than 100, and it is %d", num1);
	}
	else if(num2 > 100 ){
		printf("one number is greater than 100, and it is %d", num2);
	}
	else if(num1 <= 100 && num2 <= 100){
		printf("both are less than (or equal to) 100, and they are %d & %d", num1, num2);
	}
	else{
		printf("error with the program...");
	}
	
}

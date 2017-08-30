//if-then-else example
/* if a number is divisible by three indicate in a message
	if a number is divisible by two indiciate in a message
	if a number is divisible by both then display both messages
*/
#include<stdio.h>

int main(){
	int userNum;
	
	printf("Enter a whole number: \n");
	scanf("%d", &userNum);
	
	if(userNum % 2 == 0 && userNum % 3 ==0){
		printf("Divisible by 2\n");
		printf("Divisible by 3\n");
	}
	else if(userNum % 3 == 0){
		printf("Divisible by 3\n");
	}
	else if(userNum % 3 == 0){
		printf("Divisible by 2\n");
	}
	else{
		printf("Error: Cannot perform action\n");
	}
}


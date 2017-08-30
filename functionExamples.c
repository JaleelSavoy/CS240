#include<stdio.h>

int main(){
	int anyNumber;
	printf("Enter any number: \n");
	scanf("%d", anyNumber);
	
	if(anyNumber < 50){
		printf("Big Number");	
	}
	else{
		printf("Small Number");
	}
	
	addition(2,3);
	echoNumber();
	echoNumber2(2017);
	
	
	
}
void echoNumber(){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("You just entered: %d\n", number);
}
void echoNumber2(int num){
	printf("You just entered: %d\n", num);
}
	
void addition(int a, int b){
	int result = a + b;
	printf("%d\n", result);
}

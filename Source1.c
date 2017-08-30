#include<stdio.h>

int main(){
	int i;
	i = 0;
	
	while(i < 100){
		printf("while: I am i: %d\n", i);
		i++;
	}
	
	do{
		printf("do-while: I am i: %d\n", i)	;
		i++;
	}
	while(i<100);
	
	int nia = 10, k;
	
	k = plus_one(i); //the call
	
	printf("%d + 1 is %d\n", i, k);
	
	return 0;
}

int plus_one(int n) //the definition
{
	return n + 1;
}



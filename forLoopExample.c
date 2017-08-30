#include<stdio.h>

int main(){
	int counter = 0;
	int maxCount = 1000;
	for(counter = 0; 
		counter < maxCount; 
		counter++){
		printf("I will not burp in class %d\n", counter);
	}
	
	return 0;
}

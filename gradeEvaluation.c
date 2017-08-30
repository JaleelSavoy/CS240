//if-then-else example
/* if a grade is below 35 --> you fail
	if a grade is greater than or equal to 35 but less than 50 --> decent  
	if between 50 and 80 --> first class
	if above 80 --> amazing
*/
#include<stdio.h>

int main()
{
	int grade;
	
	printf("What is your grade? 0 to 100\n");
	scanf("%d", &grade);
	
	if(grade >= 80){
		printf("Amazing");
	}
	else if(grade >= 50 && grade < 80){
		printf("First Class");
	}
	else if(grade >= 35 && grade < 50){
		printf("Decent");
	}
	else{
		printf("You have failed");
	}
	
	return 0;
}

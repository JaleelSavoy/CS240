/* Hello World program */

//preprocessor directive
#include<stdio.h>
#include <stdbool.h>

//main function: the entry point of the C program
int main()
//body of the function
{
	//print to console the message
    printf("Hello World\n");
    
    /* My First Program */
    
    //gathers user input and displays it back
    int a;
    //display message as output
    printf("Enter an integer:\n");
    //takes user input
    scanf("%d", &a);
    //display input to user as an output
    printf("You enter %d\n", a);
    
    //if-then-else statement
    int rain;
    int wind = 1;
    printf("Is it raining? Enter 1 if it raining or 0 if it is not.\n");
    scanf("%d", &rain);
    
    if(rain == 1 && wind == 1){
    	printf("It is raining and windy - wear a raincoat!\n");
    	printf("Also, remember to wear boots!\n");
    }
    else if(rain == 1 && wind == 1){
    	printf("No need to carry an umbrella");
	}
	else{
    	printf("No rain, you will be okay...but it is windy!");
	}
	
	if(rain == 1 || wind == 1){
		printf("\nthis is some bad weather...");
	}
	
	//temperature if-then-else statement
	int tempCels;
	int bHotDay;
	printf("\nEnter the temperature as the nearest whole integer in celsius: ");
	scanf("%d", &tempCels);
	
	bHotDay = (tempCels > 35) ? 1 : 0;
	
    return 0;

}

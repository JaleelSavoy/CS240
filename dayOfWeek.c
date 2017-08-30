//case statement example
/* 
	get user input on the day of the week and output info on the day
*/
#include<stdio.h>
#define SUNDAY 1
#define MONDAY 2
#define TUESDAY 3
#define WEDNESDAY 4
#define THURSDAY 5
#define FRIDAY 6
#define SATURDAY 7

int main(){
	int dayOfWeek = 0;
	printf("What day is it, Sunday 1 and Saturday is 7:\n");
	scanf("%d", &dayOfWeek);
	
	switch(dayOfWeek){
		case MONDAY:
			printf("damn, it is monday! :( ");
			break;
		case TUESDAY:
			printf("here is tuesday... ");
			break;
		case WEDNESDAY:
			printf("ughhh wednesday");
			break;
		case THURSDAY:
			printf("i guess thursday is ok ");
			break;
		case FRIDAY:
			printf("yes! friday! ");
			break;
		case SATURDAY:
			printf("saturday :) ");
			break;
		case SUNDAY:
			printf("ahhhh sunday... ");
			break;
		default:
			printf("not a valid day");
	}

	return 0;

}

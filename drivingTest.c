#include<stdio.h>

int main(){
	int bEarnedDrivingLicense = 0;
	int numAttempts;
	
	do
	{
		printf("Practice makes perfect!\n");
		printf("Retake test. Passed? Enter 1 if yes and 0 if no: \n");
		
		scanf("%d", &bEarnedDrivingLicense);
		
		numAttempts++;
		
		if(bEarnedDrivingLicense == 1){
			printf("CELEBRATION TIME!");
		}
		else{
			if(numAttempts >= 5){
				printf("You are too dangerous to be on the road...");
				break;
			}
			else{
				continue;
			}
		}	
	}
	while(bEarnedDrivingLicense == 0);
}

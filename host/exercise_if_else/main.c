// write a program that takes the user's age and decides whether a user can cast a vote or not

// the minimum age for casting a vote is 18 years
//print appropriate messages

#include<stdio.h>
#include<stdint.h>


void enter(void);

int main(void)
{
	uint8_t age;
	printf("Enter your age : ");
	if(scanf("%hhu",&age)){
		if (age >= 18){
			printf("\nYou are eligible to cast the vote");
		}
		else{
			printf("\nYou are un-eligible to cast the vote");
		}
	}
	else{
		printf("\nYou entered invalid input");
	}
	enter();
	return 0;
}

void enter(void)
{
	printf("\n\nEnter to exit the application");
	while(getchar()!='\n');
	getchar();
}

//write a program which prints from 1 to 10 using while loop


#include<stdio.h>
#include<stdint.h>

void enter(void);
int main(void)
{
	uint32_t count = 1;
	printf("printing number 1 to 10\n");
	while(count <= 10){
		printf("\t%u",count++);
	}
	enter();
	return 0;
}

void enter(void)
{
	printf("\nEnter to exit the application");
	while(getchar()!='\n');
	getchar();
}

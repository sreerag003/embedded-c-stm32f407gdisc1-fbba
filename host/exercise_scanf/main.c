// wirte a program which takes 3 numbers from the user, computers and prints the average of those numbers


#include<stdio.h>


void enter(void);
int main(void)
{
	int num1, num2, num3;
	printf("Enter any two integer numbers : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("\nAverage of the entered 3 number : %f ", (((float)num1+num2+num3)/3));
	printf("\nEnter to exit the application");
	enter();
	return 0;

}


void enter(void)
{
	while(getchar()!='\n');
	getchar();
}

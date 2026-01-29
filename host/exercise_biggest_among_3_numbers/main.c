// write a program which receives 2 numbers from the user and prints the biggest of two .

//if n1 == n2, then print " both numbers are equal "

#include<stdio.h>
#include<stdint.h>


void enter(void);

int main(void)
{
	float number1, number2;
	int32_t num1, num2;

	printf("Enter any two integer numbers even you enter real numbers, consider only integer part : ");

	if(scanf("%f",&number1) && scanf("%f", &number2)){
		num1 = (int32_t)number1, num2 = (int32_t)number2;
		if (num1 > num2){
			printf("\nThe first numbered you entered was greater ");
		}
		else if(num1 == num2){
			printf("\nBoth numbers entered are same");
		}
		else{
			printf("\nSecond number entered was greater");
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

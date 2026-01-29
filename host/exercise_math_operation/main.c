//exercise to perform basic math operation but user have no control on which operation need to perform

#include<stdio.h>

#include"math.h"

void enter(void);
int main(void)
{
	int a, b;
	printf("Enter first integer value : ");
	scanf("%d",&a);
	printf("\nEnter second integer value : ");
	scanf("%d",&b);
	printf("\nResult basic math operations are ");
	printf("\n\t Addition         : %d", math_add(a,b));
	printf("\n\t Subtraction      : %d", math_sub(a,b));
	printf("\n\t Multiplication   : %lld", math_mul(a,b));
	printf("\n\t Division         : %f", math_div(a,b));
	printf("\n\t Modular Division : %d", math_modulardiv(a,b));
	fflush(stdout);
	enter();
	return 0;
}


void enter(void)
{
	while(getchar()!='\n');
	getchar();
}

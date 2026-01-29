#include<stdio.h>

int main(void)
{
	double charge, chargeE;
	double electrons;
	printf("Enter the charge : ");
	scanf("%lf",&charge);

	printf("\nEnter the charge of an electron : ");
	scanf("%le",&chargeE);
	electrons = (charge/chargeE) * -1;
	printf("\nThe number of electrons : %le",electrons);
	printf("\nThe number of electrons : %lf",electrons);
	enter();
	return 0;
}


void enter(void)
{
	while(getchar()!='\n');
	getchar();
}

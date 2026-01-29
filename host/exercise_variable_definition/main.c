//write a program in the c to calculate and print distance from A to C

#include<stdio.h>
#include<stdint.h>

int main()
{
	int32_t distance_AtoB, distance_BtoC;
	printf("Enter the distance from A to B : ");
	scanf("%d",&distance_AtoB);
	printf("\nEnter the distance from B to C : ");
	scanf("%d",&distance_BtoC);
	printf("\nTotal distance : %d",(distance_AtoB + distance_BtoC));
	fflush(stdout);
	return 0;
}

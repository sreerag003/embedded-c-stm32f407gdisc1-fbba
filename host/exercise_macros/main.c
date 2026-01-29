//Randomly using some macros for the understanding the concept of macros


#include<stdio.h>
#include<stdint.h>

#define AREA_CIR

#define pi 3.13f
#define area_circle(r) (3.14)*(r)*(r)
#define area_rectangle(length,height) (length*height)

#if !defined(AREA_CIR) && !defined(AREA_TRI)
#error "NO macros are defined"
#endif

/*
#if !defined(AREA_CIR) && !defined(AREA_TRI)
#warning "NO macros are defined"
#endif
*/

int main(void)
{


#ifdef AREA_CIR
	float r;
	printf("Enter the area of the circle : ");
	if(scanf("%f",&r)){
		if(r >= 0){
			printf("\n\tArea of the circle : %f",area_circle(r));
		}
		else
			printf("\nYou have entered negative number");
	}
	else
		printf("\nYou have entered invalid character");
#endif
	#ifdef AREA_TRI
		float height, length;
		printf("\nEnter the height and length of the rectangle : ");
		scanf("%f %f", &height, &length);
		if((height >= 0) && (length >= 0)){
			printf("\nArea of the rectangle : %f",area_rectangle(length, height));
		}
		else
			printf("\nYou entered negative value");
	#endif


/*#ifndef AREA_CIR
	float height, length;
	printf("\nEnter the height and length of the rectangle : ");
	scanf("%f %f", &height, &length);
	if((height >= 0) && (length >= 0)){
		printf("\nArea of the rectangle : %f",area_rectangle(length, height));
	}
	else
		printf("\nYou entered negative value");
#endif
*/

}


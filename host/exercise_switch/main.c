/*write a program to calculate the area of different geometical figures
 * circle, triangle, trapezoid, square, and rectangle
 *
 * programmer should ask the user to enter the code for which user wants to find out the area
 *
 */

#include<stdio.h>
#include<stdint.h>



void enter(void);
void invalid(void);
#define pi 3.14


int main(void)
{
	float data1, data2, data3;
	uint8_t option;
	printf("Select option you want to calculate the area of a share :\n\t't' - triangle\n\t'z' - trapezoid\n\t'c' - circle\n\t's' - square\n\t'r' - rectangle");
	printf("\nEnter the option : ");
	scanf("%c",&option);
	switch(option)
	{
	case 't':
		printf("\nYou have selected the option for find the area of triangle");
		printf("\nEnter base and height : ");
		scanf("%f %f", &data1, &data2);
		if( !((data1 >=0) && (data2 >= 0)))
		{
			invalid();
			break;
		}
		else{
		printf("\nArea : %f",0.5*(data1*data2));
		break;
		}

	case 'z':
		printf("\nYou have selected the option for find the area of trapezoid");
		printf("\nEnter base a, base b and height : ");
		scanf("%f %f %f", &data1, &data2, &data3);
		if( !((data1 >=0) && (data2 >= 0) && (data3 >= 0)))
		{
			invalid();
			break;
		}
		else{
			printf("\nArea : %f",(0.5*(data1+data2)*data3));
			break;
		}

	case 'c':
		printf("\nYou have selected the option for find the area of circle");
		printf("\nEnter radius");
		scanf("%f", &data1);
		if( !(data1 >=0) )
		{
			invalid();
			break;
		}
		else{
			printf("\nArea : %f",pi*data1*data1);
			break;
		}

	case 's':
		printf("\nYou have selected the option for find the area of square");
		printf("\nEnter length of the side : ");
		scanf("%f", &data1);
		if( !((data1 >=0)))
		{
			invalid();
			break;
		}
		else{
			printf("\nArea : %f",(data1*data1));
			break;
		}

	case 'r':
		printf("\nYou have selected the option for find the area of rectangle");
		printf("\nEnter width and length ");
		scanf("%f %f", &data1, &data2);
		if( !((data1 >=0) && (data2 >= 0)))
		{
			invalid();
			break;
		}
		else{
			printf("\nArea : %f",(data1*data2));
			break;
		}

	default:
		printf("\nYOU HAVE ENTERED INVALID INPUT OPTION");
		break;
	enter();
	return 0;
	}
}
void enter(void)
{
	printf("\n\nEnter to exit the application");
	while(getchar()!='\n');
	getchar();
}

void invalid(void)
{
	printf("\n=============================================================\n\tYOU HAVE ENTERED NEGATIVE NUMBER\n=============================================================");
}

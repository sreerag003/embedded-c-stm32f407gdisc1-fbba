/*
 * write a function that accepts 2 arrays and swaps them out
 * print the updated arrays after swapping
 * your program should input the array elements from the user
 */




#include<stdio.h>
#include<stdint.h>

void swapping_array(int8_t *, int8_t *, uint8_t , uint8_t );
void display_array(int8_t *, uint8_t );
void enter(void);
int main(void)
{
	int8_t nitem1, nitem2;
	printf("Enter the size of first array : ");
	scanf("%hhd",&nitem1);
	printf("\nEnter the size of second array : ");
	scanf("%hhd",&nitem2);
	if ((nitem1<0) && (nitem2<0))
	{
		printf("\nsize of the array can't be negative");
		return 0;
	}
	else{
		int8_t array1[nitem1], array2[nitem2];
		for (uint8_t i = 0; nitem1 > i; i++){
			printf("\nEnter the %d elements of first array : ",i);
			scanf("%hhd",&array1[i]);
		}
		printf("\n*****************");
		for (uint8_t i = 0; nitem2 > i; i++){
			printf("\nEnter the %d elements of second array : ",i);
			scanf("%hhd",&array2[i]);
		}

		printf("\n\n==========================================================\ncontent of the arrays before swapping\n==========================================================");
		printf("\n\tThe content of the first array : \n");
		display_array(array1, nitem1);
		printf("\n\n\tThe content of the second array : \n");
		display_array(array2, nitem2);

		swapping_array(array1, array2, nitem1, nitem2);

		printf("\n==========================================================\ncontent of the arrays after swapping\n==========================================================");
		printf("\n\tThe content of the first array : \n");
		display_array(array1, nitem1);
		printf("\n\n\tThe content of the second array : \n");
		display_array(array2, nitem2);
		enter();
	}

	return 0;
}

void swapping_array(int8_t *array1, int8_t *array2, uint8_t array1_len, uint8_t array2_len)
{
	uint8_t swapp_size = (array1_len <= array2_len)? array1_len : array2_len;
	int8_t temp;
	for( uint8_t i = 0; swapp_size > i; i++){
		temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
}


void display_array(int8_t *array, uint8_t array_len)
{
	for (uint8_t i = 0; array_len > i; i++){
		printf("\t%hhd",array[i]);
	}
}

void enter(void)
{
	printf("\nEnter to exit the application");
	while(getchar()!='\n');
	getchar();
}

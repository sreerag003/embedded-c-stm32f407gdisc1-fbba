/* create a char type variable and initialize it to value 100
 * print the address of the above variable
 * create a pointer variable and store the address of the above variable
 * perform read operation on the pointer variable to fetch 1 byte of data from the pointer
 * print the data obtained from the read operation on the pointer
 * perform write operation on the pointer to store the value 65
 * print the value of the variable defined in step 1
 */

#include<stdio.h>

void enter(void);

int main(void)
{
	char data = 100, content;
	printf("\nAddress of the variable data is %p",&data);
	char *pdata = &data;

	content = *pdata;
	printf("\nThe data present pdata pointer is %d",content);

	*pdata = 65;
	printf("\nContent of the variable data after updating is %d",data);

	enter();
	return 0;
}

void enter(void)
{
	while(getchar()!='\n');
	getchar();
}

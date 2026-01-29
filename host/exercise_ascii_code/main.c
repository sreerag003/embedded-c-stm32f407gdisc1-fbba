// wirte a program takes 6 character from the user and prints the ASCII  codes of the entered character;

#include<stdio.h>


void enter(void);
int main(void)
{
	char num1, num2, num3, num4, num5, num6;
	printf("Enter any 6 character : \n");
	scanf("%c %c %c %c %c %c",&num1,&num2,&num3,&num4,&num5,&num6);
	printf("\nThe ASCII code of the entered characters are");
	printf("\n\tfirst chara : %u\n\tsecond chara : %u\n\tthird chara: %u\n\tfourth chara : %u\n\tfifth chara : %u\n\tsixth chara : %u",num1, num2, num3, num4, num5, num6);
	enter();
	return 0;

}


void enter(void)
{
	while(getchar()!='\n');
	getchar();
}

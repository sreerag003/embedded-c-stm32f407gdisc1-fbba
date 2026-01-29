//write a program for number pyramid


#include<stdio.h>
#include<stdint.h>

void enter(void);
int main(void)
{
	int32_t count;
	printf("Enter the pyramid height : ");
	if(scanf("%d",&count) && (!(count <0))){
		for (uint32_t i = 1; i <= count; i++){
			for(uint32_t j = i; j > 0; j--){
			printf("%2u\t",j);
			}
			printf("\n");
		}
	}
	else{
		printf("\nyou have entered an invalid value");
	}
	enter();
	return 0;
}

void enter(void)
{
	printf("\nEnter to exit the application");
	while(getchar()!='\n');
	getchar();
}

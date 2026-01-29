/*
 * main.c
 *
 *  Created on: Jan 29, 2026
 *      Author: sree
 */


#include<stdio.h>
#include<stdint.h>
#include"main.h"
#define size 3
uint8_t option;
student_record_t students_record[size];

void option_print(void);
int option_select(uint8_t );
void display_record(student_record_t *);
int adding_record(student_record_t *student_record);
int deleting_record(student_record_t *);

int main(void)
{
	uint8_t status = 1;
	while(status)
	{
		option_print();
		status = option_select(option);
	}

}


void option_print(void)
{

	printf("\n_______________________________________\n");
	printf("\nSelect the option from below");
	printf("\n\tDisplay all records   ----->  1");
	printf("\n\tAdd a new record      ----->  2");
	printf("\n\tDelete a record       ----->  3");
	printf("\n\texit application      ----->  0");
	printf("\nEnter the option : ");
	fflush(stdout);
	scanf(" %c",&option);
	printf("_______________________________________\n");

}

int option_select(uint8_t option)
{
	uint8_t adding_status;
	//option selecting action
	switch (option)
	{
	case '1':
		display_record(students_record);
		break;
	case '2':
		adding_status = adding_record(students_record);
		if(adding_status == 1)
			printf("\nEntered Roll number is already present");
		else if((adding_status == 2) || (adding_status == 0) )
			adding_status ? printf("\nData added successfully"): printf("\nlack of space to add new data");
		break;
	case '3':
		deleting_record(students_record) ? printf("\nData Deleted ") : printf("\nData didn't exist");

		break;
	case '0':
		//function for exiting the program
		return 0;
		break;
	/*default :
		printf("\n\n--------------------------------------------\nYou have entered invalid option\n\nRead option carefully\n--------------------------------------------");
	*/
	}
	return 1;
}

void display_record(student_record_t *student_record)
{
	printf("\nPrinting all the students record");
	for ( uint8_t i = 0; size > i; i++)
	{
		if(student_record[i].rollnumber == 0);
		else
		{
		printf("\n***************************************************");
		printf("\n\tRoll number : %u",student_record[i].rollnumber);
		printf("\n\tStudent semester : %hhu",student_record[i].semister);
		printf("\n\tDate of Birth : %hhu/%hhu/%u",student_record[i].dob.dd, student_record[i].dob.mm, student_record[i].dob.year);
		printf("\n\tStudent Name  : %s %s",student_record[i].name.first_name, student_record->name.second_name);
		printf("\n***************************************************\n");
		}
	}

}

int adding_record(student_record_t *student_record)
{
	uint32_t new_rollnumber;
	printf("\n====================================================\n");
	printf("\nAdding a new student record\n");
	printf("\n\tEnter Roll number : ");
	scanf("%u",&new_rollnumber);
	for ( uint8_t i = 0; i < size; i++)
	{
		if(new_rollnumber == student_record[i].rollnumber)
		{
		return 1;//
		break;
		}
	}
	for ( uint8_t i = 0; i < size; i++){
		if(student_record[i].rollnumber == 0){

			student_record[i].rollnumber = new_rollnumber;

			printf("\n\tStudent semester : ");
			scanf("%hhu",&student_record[i].semister);

			printf("\n\tDate of Birth (dd/mm/yyyy) : ");
			scanf(" %hhu  %hhu  %u", &student_record[i].dob.dd, &student_record[i].dob.mm, &student_record[i].dob.year);

			printf("\n\tStudent Name : ");
			scanf("%s %s",student_record[i].name.first_name, student_record[i].name.second_name);
			return  2;// if data added is successful
		}
	}
	printf("\n====================================================\n");
	return 0;
}

int deleting_record(student_record_t *student_record)
{
	uint32_t rollnumber_delete;
	printf("\n####################################################\n");
	printf("\nDeleting a student record\n");
	printf("\n\tEnter Roll number : ");
	scanf("%u",&rollnumber_delete);
	for ( uint8_t i = 0; i < size; i++)
	{
		if(rollnumber_delete == student_record[i].rollnumber)
		{
		student_record[i].rollnumber = 0;
		return 1;
		break;
		}
	}
	printf("\n####################################################\n");
	return 0;
}

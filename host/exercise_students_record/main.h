/*
 * main.h
 *
 *  Created on: Jan 29, 2026
 *      Author: sree
 */

#ifndef MAIN_H_
#define MAIN_H_

typedef struct
{
	uint32_t rollnumber;
	uint8_t semister;
	struct {
		uint8_t dd;
		uint8_t mm;
		uint32_t year;
	}dob;
	uint8_t branch[100];
	struct
	{
		char first_name[25];
		char second_name[25];
	}name;

}student_record_t;



#endif /* MAIN_H_ */

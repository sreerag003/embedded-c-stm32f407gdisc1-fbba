/*
 * given 32 bit packet information and print the values of different fields. Create a structure with member elements as packet fields as shown below
 */


#include<stdio.h>
#include<stdint.h>

union packet_t
{
	uint32_t content;
	struct
	{
		uint32_t crc              : 2;
		uint32_t status           : 1;
		uint32_t payload          : 12;
		uint32_t bat              : 3;
		uint32_t sensor           : 3;
		uint32_t longaddr         : 8;
		uint32_t shortaddr        : 2;
		uint32_t addrmode         : 1;
	}packetFields;

};

void enter(void);
int main(void)
{
	union packet_t packet;
	printf("\nEnter packet 32 bit value : ");
	scanf("%x",&packet.content);

	//printing the content
	printf("\n\t crc : %d", packet.packetFields.crc);
	printf("\n\t status : %d", packet.packetFields.status);
	printf("\n\t payload : %d", packet.packetFields.payload);
	printf("\n\t bat : %d", packet.packetFields.bat);
	printf("\n\t sensor : %d", packet.packetFields.sensor);
	printf("\n\t longaddr : %d", packet.packetFields.longaddr);
	printf("\n\t shortaddr : %d", packet.packetFields.shortaddr);
	printf("\n\t addrmode : %d", packet.packetFields.addrmode);
	enter();
	return 0;
}

void enter(void)
{
	printf("\nEnter to exit the application");
	while(getchar()!='\n');
	getchar();
}



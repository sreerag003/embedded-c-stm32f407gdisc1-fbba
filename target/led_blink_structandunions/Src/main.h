/*
 * main.h
 *
 *  Created on: Jan 28, 2026
 *      Author: sree
 */

#ifndef MAIN_H_
#define MAIN_H_



typedef struct
{
    uint32_t GPIOA_EN       : 1;
    uint32_t GPIOB_EN       : 1;
    uint32_t GPIOC_EN       : 1;
    uint32_t GPIOD_EN       : 1;
    uint32_t GPIOE_EN       : 1;
    uint32_t GPIOF_EN       : 1;
    uint32_t GPIOG_EN       : 1;
    uint32_t GPIOH_EN       : 1;
    uint32_t GPIOI_EN       : 1;
    uint32_t RESERVED_1     : 3;
    uint32_t CRC_EN         : 1;
    uint32_t RESERVED_2     : 5;
    uint32_t BKPSRAM_EN     : 1;
    uint32_t RESERVED_3     : 1;
    uint32_t CCMDATARAM_EN  : 1;
    uint32_t DMA1_EN        : 1;
    uint32_t DMA2_EN        : 1;
    uint32_t RESERVED_4     : 2;
    uint32_t ETHMAC_EN      : 1;
    uint32_t ETHMACTX_EN    : 1;
    uint32_t ETHMACRX_EN    : 1;
    uint32_t ETHMACPTP_EN   : 1;
    uint32_t OTGHS_EN       : 1;
    uint32_t OTGHSULPI_EN   : 1;
    uint32_t RESERVED_5     : 1;
} RCC_AHB1ENR_t;//for clk enabling



typedef union
{
	struct
	{
		uint32_t NO_USE       : 24;
		uint32_t MODER_12_15  : 8;
	};//to access the required bit field together

	struct
	{
	    uint32_t MODER0        : 2;
	    uint32_t MODER1        : 2;
	    uint32_t MODER2        : 2;
	    uint32_t MODER3        : 2;
	    uint32_t MODER4        : 2;
	    uint32_t MODER5        : 2;
	    uint32_t MODER6        : 2;
	    uint32_t MODER7        : 2;
	    uint32_t MODER8        : 2;
	    uint32_t MODER9        : 2;
	    uint32_t MODER10       : 2;
	    uint32_t MODER11       : 2;
	    uint32_t MODER12       : 2;
	    uint32_t MODER13       : 2;
	    uint32_t MODER14       : 2;
	    uint32_t MODER15       : 2;
	};

} GPIOx_MODER_u;//for setting which mode the pin should work as


typedef union
{
	struct
	{
		uint32_t NO_USE              : 12;
		uint32_t MODER_12_15         :  4;
		uint32_t RESERVED_packet     : 16;
	};// to access the bit field together

	struct
	{
    uint32_t PIN0          : 1;
    uint32_t PIN1          : 1;
    uint32_t PIN2          : 1;
    uint32_t PIN3          : 1;
    uint32_t PIN4          : 1;
    uint32_t PIN5          : 1;
    uint32_t PIN6          : 1;
    uint32_t PIN7          : 1;
    uint32_t PIN8          : 1;
    uint32_t PIN9          : 1;
    uint32_t PIN10         : 1;
    uint32_t PIN11         : 1;
    uint32_t PIN12         : 1;
    uint32_t PIN13         : 1;
    uint32_t PIN14         : 1;
    uint32_t PIN15         : 1;
    uint32_t RESERVED      : 16;
	};
} GPIOx_ODR_u;;//for output


#endif /* MAIN_H_ */

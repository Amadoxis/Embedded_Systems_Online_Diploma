/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ahmed M. RIzk
 * @brief          : Main program body
 ******************************************************************************
 */

#include "Platform_Types.h"

#define RCC_BASE 0x40021000
#define PortA_BASE 0x40010800

#define RCCAPB2ENR *(vuint32 *)  (RCC_BASE+0x18)
#define GPIOA_CRH  *(vuint32 *)  (PortA_BASE+0x04)
#define GPIOA_ODR  *(vuint32 *)  (PortA_BASE+0x0C)

typedef union {
	vuint32 all_fields;
	struct{
		vuint32 reserved:13;
		vuint32 P_13:1;
	}Pins;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(PortA_BASE + 0x0C);

int main(void)
{
	uint32 i=0;
	RCCAPB2ENR |=1<<2;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |=0x00200000;

	while(1){
		R_ODR->Pins.P_13=1; //set bit 13
		for(i=0;i<60000;i++); //delay
		R_ODR->Pins.P_13=0; //clear bit 13
		for(i=0;i<60000;i++); //delay
	}
	return 0;
}

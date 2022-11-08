#include "uart.h"

#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000)) 

void Uart_Send_String (char* P_tx_string){
	while (*P_tx_string !='\0'){
		UART0DR = (unsigned int)(*P_tx_string); /* we cast the character to unsdigned intergers to*/
		P_tx_string++;							/*to match register size */
	}
}
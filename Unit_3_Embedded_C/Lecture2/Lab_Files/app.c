#include "uart.h"

unsigned char string_buffer[100]= "learn-in-depth:Ahmed M. Rizk";
unsigned char const string_buffer2[100]= "learn-in-depth:Ahmed M. Rizk";

void ahmed (void){
	
	Uart_Send_String(string_buffer); /* or &string_buffer[0]*/

}
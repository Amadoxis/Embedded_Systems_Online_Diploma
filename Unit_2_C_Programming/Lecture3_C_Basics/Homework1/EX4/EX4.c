/*
 * EX4.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	float x,y;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter two integers:");
	/*fflush(stdin);fflush(stdout);*/
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Product: %.2f",x*y);
	return 0;
}

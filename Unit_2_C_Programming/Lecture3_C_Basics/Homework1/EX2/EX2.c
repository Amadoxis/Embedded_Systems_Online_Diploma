/*
 * EX2.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	int integer;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&integer);
	printf("You entered: %d",integer);
	return 0;
}

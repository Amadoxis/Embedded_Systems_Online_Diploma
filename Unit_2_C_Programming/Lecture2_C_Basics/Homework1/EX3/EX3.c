/*
 * EX3.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	int x,y;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter two integers:");
	/*fflush(stdin);fflush(stdout);*/
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Sum: %d",x+y);
	return 0;
}

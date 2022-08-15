/*
 * EX5.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	char c;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a character:");
	/*fflush(stdin);fflush(stdout);*/
	scanf("%c",&c);
	printf("ASCII value of %c= %d",c,c);
	return 0;
}

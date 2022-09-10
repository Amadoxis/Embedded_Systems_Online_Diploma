/*
 * EX1.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	int number;
	setvbuf(stdout, NULL, _IONBF, 0);
	/*fflush(stdin);fflush(stdout);*/
	while (1){
		printf("Enter a number:");
		scanf("%d",&number);
		if(number%2==0){
			printf("The number is Even\n");
		}
		else{
			printf("The number is Odd\n");
		}
	}
	return 0;
}

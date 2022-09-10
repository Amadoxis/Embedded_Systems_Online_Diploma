/*
 * EX4.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	float x;
	setvbuf(stdout, NULL, _IONBF, 0);

	while(1){
		printf("Enter a number:");
		scanf("%f",&x);

		if(x>0){
			printf("The number is positive.\n");
		}
		else if (x<0){
			printf("The number is negative.\n");
		}
		else{
			printf("The number is zero.\n");
		}
	}
	return 0;
}










/*setvbuf(stdout, NULL, _IONBF, 0);*/
/*fflush(stdin);fflush(stdout);*/

/*
 * EX3.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	float x,y,z,max;
		setvbuf(stdout, NULL, _IONBF, 0);
		printf("Enter 3 numbers:");

		scanf("%f",&x);
		scanf("%f",&y);
		scanf("%f",&z);

		max=(x>y)?x:y;
		max=(max>z)?max:z;

		printf("Largest number: %.2f",max);
	return 0;
}










/*setvbuf(stdout, NULL, _IONBF, 0);*/
	/*fflush(stdin);fflush(stdout);*/

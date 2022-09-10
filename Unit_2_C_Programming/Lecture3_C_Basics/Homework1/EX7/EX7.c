/*
 * EX7.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	float a,b;
	setvbuf(stdout, NULL, _IONBF, 0);
	/*fflush(stdin);fflush(stdout);*/

	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("Value of a after swap: %.2f \n",a);
	printf("Value of b after swap: %.2f \n",b);
	return 0;
}

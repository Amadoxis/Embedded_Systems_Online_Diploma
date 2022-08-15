/*
 * EX6.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	float a,b,c;
	setvbuf(stdout, NULL, _IONBF, 0);
	/*fflush(stdin);fflush(stdout);*/

	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);

	c=a;
	a=b;
	b=c;

	printf("Value of a after swap: %.2f \n",a);
	printf("Value of b after swap: %.2f \n",b);
	return 0;
}

/*
 * Ex5.c
 *
 *  Created on: Oct 2, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

#define pi 3.14
#define area(r) (pi)*(r)*(r)

int main(){
	float radius;

	printf("Please enter the radius to calculate the area:");
	flush();scanf("%f",&radius);
	printf("The area is %f",area(radius));

	return 0;
}








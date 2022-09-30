/*
 * Ex2.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);
int factorial(int n);

int main(){
	int n;
	printf("Please enter a number:\n");
	flush();scanf("%d",&n);
	printf("The factorial of %d is %d",n,factorial(n));
	return 0;
}
int factorial(int n){
	if (n>=1) return n*factorial(n-1);
	else return 1;
}

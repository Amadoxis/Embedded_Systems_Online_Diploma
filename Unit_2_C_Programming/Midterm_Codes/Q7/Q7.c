/*
 * Q7.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>


int sum(int num);

int main(){
	int n;
	printf("Please enter the desired number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Sum of digits until %d is = %d",n,sum(n));
	return 0;
}
int sum(int num){
	return (num*(num+1)/2);
}

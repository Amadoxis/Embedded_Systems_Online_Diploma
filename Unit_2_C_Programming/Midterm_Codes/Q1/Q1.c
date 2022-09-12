/*
 * Q1.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
void sum_dig(int num);
int main(){
	int n;
	printf("Please enter a number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	sum_dig(n);

	return 0;
	}
void sum_dig(int num){
	int sum=0;
	while (num!=0){
		sum+=num%10;
		num/=10;
	}
	printf("Sum of digits = %d",sum);
}





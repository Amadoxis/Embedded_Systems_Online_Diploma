/*
 * Q10.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

void count_max_ones(int num);

int main(){
	int n;
	printf("Please enter the desired number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	count_max_ones(n);
	return 0;
}
void count_max_ones(int num){
	int i,j,count=0,max=0;
	printf("%d in binary is 0b",num);
	for(i=31;i>=0;i--){
		j=num >> i;
		switch(j&1){
		case 1:printf("1");count++;break;
		case 0:printf("0");max=max>count?max:count;count=0;break;
		}
	}
	printf("\nMax number of ones between two zeroes = %d",max);
}

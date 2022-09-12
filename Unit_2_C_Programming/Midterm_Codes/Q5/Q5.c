/*
 * Q4.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

void print_count_binary(int num);

int main(){
	int n;
	printf("Please enter the desired number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	print_count_binary(n);
	return 0;
}



void print_count_binary(int num){
	int i,j,count=0;
	printf("%d in binary is 0b",num);
	for(i=31;i>=0;i--){
		j=num >> i;
		if(j&1){
			printf("1");
			count++;
		}
		else{
			printf("0");
		}
	}
	printf("\n Number of ones = %d",count);
}

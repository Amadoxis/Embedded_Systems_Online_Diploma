/*
 * Q6.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

unsigned int num(unsigned int number);

int main(){
	unsigned int number,result;
	printf("please enter a number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	result=num(number);
	if(result==1){
		printf("\n4th LSB is 1");
	}
	else{
		printf("\n4th LSB is 0");
	}
}



unsigned int num(unsigned int number){
	int i,j;
	printf("%u in binary is = 0b",number);
	for(i=31;i>=0;i--){
		j=number >> i;
		if(j&1){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	j=number>>3;
	if(j&1){
		return 1;
	}
	else{
		return 0;
	}
}

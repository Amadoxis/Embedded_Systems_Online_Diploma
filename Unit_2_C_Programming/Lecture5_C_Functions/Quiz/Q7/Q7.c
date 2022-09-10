/*
 * Q7.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
int power_test(float num);
int main(){
	int num;
	while(1){
		printf("Please choose a number \n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num);
		power_test(num);
	}
	return 0;
}
int power_test(float num){
	while(num>3){
		num/=3;
	}
	if (num==3){
		printf("Number is a power of 3\n");
		return 0;
	}
	else{
		printf("Number is not a power of 3\n");
		return 1;
	}
}



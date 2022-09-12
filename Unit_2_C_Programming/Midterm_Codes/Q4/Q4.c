/*
 * Q4.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

void reverse_number(int num);

int main(){
	int n;
	printf("Please enter the desired number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	reverse_number(n);
	return 0;
}

void reverse_number(int num){
		int reverse=0;
		while(num!=0){
			reverse=(reverse*10)+(num%10);
	        num=num/10;
	  }
	  printf("The reversed number is %d", reverse);
}



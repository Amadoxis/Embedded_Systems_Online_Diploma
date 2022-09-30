/*
 * Ex1.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#include <string.h>
#define flush(); fflush(stdin);fflush(stdout);
void print_prime(int min,int max);

int main(){
	int a,b;
	printf("Please enter the minimum number:\n");
	flush();scanf("%d",&a);
	printf("Please enter the maximum number:\n");
	flush();scanf("%d",&b);
	printf("Prime numbers between %d and %d are:-",a,b);
	print_prime(a,b);
	return 0;
}
void print_prime(int min,int max){
	int i,flag=0;
	for(min;min<=max;min++){
		for(i=2;i<=min;i++){
			if(i==min) continue;
			if((min%i)==0){
				flag=1;
				break;
			}
		}
		if (flag==0){
			printf("\t%d",min);
		}
		else{
			flag=0;
		}
	}
}

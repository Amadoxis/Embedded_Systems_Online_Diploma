/*
 * Q5.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

int CLR_BIT(int number,int bit);
void print_binary (int number);

int main(){
	int number,bit;
	printf("please enter a number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("Entered number %d equals in binary=",number);
	print_binary(number);
	printf("\n select which bit to clear:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&bit);
	number=CLR_BIT(number,bit);
	printf("Number after clearing bit is %d and equals in binary=",number);
	print_binary(number);

}
int CLR_BIT(int number,int bit){
	return number &= ~(1<<bit);
}
void print_binary(int number){
	int i,j;
	printf("0b");
	for(i=31;i>=0;i--){
		j=number >> i;
		if(j&1){
			printf("1");
		}
		else{
			printf("0");
		}
	}
}


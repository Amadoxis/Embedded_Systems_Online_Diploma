/*
 * Ex4.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

int pow(int n,int p);
int main(){
	int n, p;
	printf("Please enter the number and its power (n, p):");
	flush();scanf("(%d, %d",&n,&p);
	printf("%d to the power of %d is = %d",n,p,pow(n,p));
	return 0;
}
int pow(int n,int p){
	if(p != 0){
		return n=n*pow(n,p-1);
	}
	else{
		return 1;
	}
}


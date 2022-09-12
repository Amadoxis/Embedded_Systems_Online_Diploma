/*
 * Q2.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

float sqrt(int num);

int main(){
	int n;
	float result;
	printf("Please enter a number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	sqrt(n);
	result=sqrt(n);
	printf("The square root is = %0.3f",result);

	return 0;
}
float sqrt(int num){
	int min=1, max=2;
	float sweep,root;
	while(1){
		if(num>=(min*min) && num <=(max*max)){
			sweep=min;
			break;
		}
		else{
			min++;
			max++;
		}
	}
	while(1){
		if (num==(int)(sweep*sweep)){
			root=sweep;
			break;
		}
		else{
			sweep+=0.00001;
		}
	}
	return root;
}





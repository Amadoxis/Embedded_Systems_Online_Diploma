/*
 * Q3.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

void print_prime(int min,int max);
float sqrt(int num);

int main(){
	int a,b;
	float result;
	printf("Please enter the minimum number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("Please enter the maximum number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	printf("Prime numbers between %d and %d are:-\n",a,b);
	print_prime(a,b);
	return 0;
}
void print_prime(int min,int max){
	int i,flag=0;
	for(min;min<=max;min++){
		for(i=2;i<=(int)sqrt(min);i++){ /*sqrt function created in Q2*/
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



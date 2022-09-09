/*
 * Q4.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

unsigned int pow(unsigned int base,unsigned int power);
unsigned int AsciiToInt(char arr[],int n);

int main(){
	unsigned int result;
	char arr[4]={'2','0','3','5'};
	result=AsciiToInt(arr,4);
	printf("result=%u",result);
}

unsigned int pow(unsigned int base,unsigned int power){
	int i, result=1;
	if(power==0){
		return 1;
	}
	while (power!=0){
		result*=base;
		power--;
	}
	return result;
}

unsigned int AsciiToInt(char arr[],int n){
	int i;
	unsigned int sum=0;
	for(i=0;i<n;i++){
		if(arr[i]>='0' && arr[i]<='9'){
			sum+=(arr[i]-48)*(pow(10,n-i-1));
		}
		else{
			printf("Incorrect Values\n");
			return 0;
		}
	}
	return sum;
}

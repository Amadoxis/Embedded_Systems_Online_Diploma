/*
 * Ex2.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

int main(){
	int i=0,n;
	float arr[200],avg;
	printf("Enter the number of elements (1-200):");
	flush();scanf("%d",&n);
	if(n<1||n>200){
		printf("Number out of range!!");
		return 0;
	}
	for(i=0;i<n;i++){
		printf("%d. Enter the number:",i+1);
		flush();scanf("%f",&arr[i]);
		avg+=arr[i];
	}
	printf("The average is %.2f",avg/n);
	return 0;
}


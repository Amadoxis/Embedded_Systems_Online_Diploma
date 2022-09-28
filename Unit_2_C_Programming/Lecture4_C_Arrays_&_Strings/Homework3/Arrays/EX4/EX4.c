/*
 * Ex4.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

int main(){
	int i,n,element, position;
	int array[100];

	printf("Please enter the number of elements (0<n<100):");
	flush();scanf("%d",&n);
	printf("Please enter the %d desired elements:\n",n);
	for(i=0;i<n;i++){
		flush();scanf("%d",&array[i]);
	}
	printf("Please enter the element you wish to insert and its position (element, position)\n");
	flush();scanf("(%d, %d)",&element,&position);n++; /* n is incremented by one */
	for(i=n;i>position-1;i--){
		array[i]=array[i-1];
	}
	array[position-1]=element;
	printf("New array is:\t");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	return 0;
}


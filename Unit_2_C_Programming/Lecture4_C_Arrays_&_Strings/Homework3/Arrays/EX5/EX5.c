/*
 * Ex5.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

int main(){
	int i,n,find,found=0;
	int array[100];

	printf("Please enter the number of elements (0<n<100):");
	flush();scanf("%d",&n);
	printf("Please enter the %d desired elements:\n",n);
	for(i=0;i<n;i++){
		flush();scanf("%d",&array[i]);
	}
	printf("Please enter the element you wish to find\n");
	flush();scanf("%d",&find);
	for(i=0;i<n;i++){
		if(array[i]==find){
			printf("Element \"%d\" found at position %d",find, i+1);
			found=1;
		}
	}
	if (!found) printf("Element does not exist");
	return 0;
}


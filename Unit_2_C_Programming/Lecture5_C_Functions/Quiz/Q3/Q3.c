/*
 * Q3.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

void reverse_array(int arr[],int arr2[],int size);

int main(){
	int arr[6]={30,40,50,60,70,80};
	int arr_reversed[6];
	int size=6,i=0;
	printf("The original array is: \t");
	for(i;i<size;i++){
		printf("%d\t",arr[i]);
	}
	reverse_array(arr,arr_reversed,size);
	return 0;
}
void reverse_array(int arr[],int arr2[],int size){
	int i=0;
	printf("\nThe reversed array is: \t");
	for (i;i<size;i++){
		arr2[i]=arr[size-i-1];
		printf("%d\t",arr2[i]);
	}
}



/*
 * Q2.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

void swap_array(int arr[],int arr2[],int arr3[],int size);
int main(){
	int arr[10]={30,40,50,60,70,80};
	int arr2[10]={10,20,30,40,50,60,70,80,90,100};
	int arr3[10];
	int size=10,i=0;
	printf("The original arrays are: \n");
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<size;i++){
		printf("%d\t",arr2[i]);
	}
	swap_array(arr,arr2,arr3,size);
	printf("\nThe swapped arrays are: \n");
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<size;i++){
		printf("%d\t",arr2[i]);
	}

	return 0;
}
void swap_array(int arr[],int arr2[],int arr3[],int size){
	int i=0;
	for (i;i<size;i++){
		arr3[i]=arr2[i];
		arr2[i]=arr[i];
		arr[i]=arr3[i];
	}
}



/*
 * Q6.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

int unique_number(int arr[], int size);
void print_arr(int arr[],int size);


int main(){
	int arr1[7]={4,2,5,2,5,7,4};
	int arr2[3]={4,2,4};
	int arr3[7]={5,6,8,6,7,5,7};
	printf("Array 1 = ");print_arr(arr1, sizeof(arr1)/sizeof(arr1[0]));
	printf("Unique element= %d\n",unique_number(arr1,sizeof(arr1)/sizeof(arr1[0])));
	printf("Array 2 = ");print_arr(arr2,sizeof(arr2)/sizeof(arr2[0]));
	printf("Unique element= %d\n",unique_number(arr2,sizeof(arr2)/sizeof(arr2[0])));
	printf("Array 3 = ");print_arr(arr3,sizeof(arr3)/sizeof(arr3[0]));
	printf("Unique element= %d\n",unique_number(arr3,sizeof(arr3)/sizeof(arr3[0])));
	return 0;
}
int unique_number(int arr[], int size){ /*assuming even number of occurrence*/
	int i,unique=arr[0];
	for(i=1;i<size;i++){
		unique^=arr[i];
	}
	return unique;
}
void print_arr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

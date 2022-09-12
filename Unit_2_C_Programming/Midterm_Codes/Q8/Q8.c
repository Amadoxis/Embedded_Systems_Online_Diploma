/*
 * Q8.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>


void reverse_array(int arr1[],int size);
void print_arr(int arr[],int size);

int main(){
	int arr[5]={1,3,5,7,9};
	printf("Original array is =\t");
	print_arr(arr,sizeof(arr)/sizeof(arr[0]));
	reverse_array(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
void reverse_array(int arr1[],int size){
	int arr2[size],i=0;
	for(i;i<size;i++){
		arr2[i]=arr1[size-1-i];
	}
	printf("Reversed array is =\t");
	print_arr(arr2,size);

}
void print_arr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

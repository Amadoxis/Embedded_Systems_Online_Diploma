/*
 * Q8.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
int seek(int arr[],int size,int num);
int main(){
	int arr[9]={1,2,3,1,2,3,1,2,3},size=9,num=0;
	while(1){
		printf("Please choose the number you wish to find the last index of\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num);
		seek(arr,size,num);
	}
	return 0;
}
int seek(int arr[],int size,int num){
	int index=-1,i;
	for(i=0;i<size;i++){
		if(arr[i] == num){
			index=i;
		}
	}
	if (index==-1){
		printf("The number didn't occur in the array!\n");
		return -1;
	}
	else{
		printf("The last index of occurrence is %d\n",index);
		return index;
	}
}



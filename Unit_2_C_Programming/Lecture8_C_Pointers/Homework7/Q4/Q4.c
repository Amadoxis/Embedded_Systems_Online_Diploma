/*
 * Q4.c
 *
 *  Created on: Oct 17, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

char get_array(int *arr);
void reverse_array(int*arr,int*rev_array,int size);
void print_array(int*arr,char*str,int size);

int main()
{
    int arr[100],arr_rev[100];
    int *p = arr, *p_rev = arr_rev;
    char size=get_array(p);
    reverse_array(p,p_rev,size);
    print_array(arr,"Original",size);
    print_array(arr_rev,"Reversed",size);
    return 0;
}
char get_array(int *arr){
    char size,i,j=1;
    printf("Please enter the amount of elements needed(max 100):");
    flush();scanf("%d",&size);
    printf("Enter the %d elements:\n",size);
    i=size;
    while(i){
        printf("Element %d:",j++);
        flush();scanf("%d",arr);
        arr++;
        --i;
    }
    return size;
}
void reverse_array(int*org,int*rev,int size){
    org+=size-1;
    while(size){
        *rev=*org;
        org--;rev++;size--;
    }
}
void print_array(int*arr,char*str,int size){
    int i=0;
    printf("\n---------------------------------------------\n");
    printf("%s array:-\n",str);
    for(i;i<size;i++){
        printf("Element %d: %d\n",i+1,arr[i]);
    }
    printf("---------------------------------------------\n");
}
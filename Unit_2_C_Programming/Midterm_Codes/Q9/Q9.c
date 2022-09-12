/*
 * Q9.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#include <string.h>

void reverse_string(char str1[],int size);

int main(){
	char str[]={"The word level is a palindrome"};
	printf("The required string is \"%s\"\n",str);
	reverse_string(str,strlen(str));
	return 0;
}
void reverse_string(char str[],int size){
	int i=0,j=0,k=size;
	printf("The reversed string is \"");
	for(i=size-1;i>=0;i--){
		if((str[i]==' ')||i==0){
			for(j=i;j<k;j++){
				if(str[j]==' ') continue; /*skip spaces*/
				printf("%c",str[j]);
			}
			k=i;
			if(k==0) continue; /*no space at the end*/
			printf(" ");  /*add spaces in between*/
		}
	}
	printf("\""); /*end quote*/
}


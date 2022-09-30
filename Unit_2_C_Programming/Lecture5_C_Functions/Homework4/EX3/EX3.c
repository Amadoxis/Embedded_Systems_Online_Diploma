/*
 * Ex3.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#include <string.h>

#define flush(); fflush(stdin);fflush(stdout);
void reverse(char str[],int size);
int main(){
	char str[100];
	printf("Please enter the string:");
	flush();
	gets(str);
	reverse(str,strlen(str)-1);
	return 0;
}
void reverse(char str[],int size){
	int c=size;
	if(c != 0){
		printf("%c",str[c]);
		reverse(str,--c);
	}
	else{
		printf("%c",str[c]);
		return;
	}
}


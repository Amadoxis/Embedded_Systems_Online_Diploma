/*
 * Ex3.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

void reverse_string(char str[],int size);
int strleng(char str[]);
int main(){
	char str[100];
	printf("Please enter a string:");
	flush();gets(str);
	printf("Original string is=\t%s\n",str);
	reverse_string(str,strleng(str));
	return 0;
}
void reverse_string(char str[],int size){
	char str2[100],i=0;
	for(i;i<size;i++){
		str2[i]=str[size-1-i];
	}
	str2[size]='\0';
	printf("Reversed string is=\t%s",str2);
}
int strleng(char str[]){
	int i,count=0;
	for(i=0;str[i]!='\0';i++){
		count++;
	}
	return count;
}



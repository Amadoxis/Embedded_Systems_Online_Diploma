/*
 * Ex1.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#include <string.h>
#define flush(); fflush(stdin);fflush(stdout);

int main(){
	int i,count=0;
	char string[100],find;
	printf("Please enter the string:");
	flush();gets(string);
	printf("Please enter the character you wish to find the frequency of\n");
	flush();scanf("%c",&find);
	for(i=0;string[i]!='\0';i++){
		if(string[i]==find){
			count++;
		}
	}
	printf("Character \"%c\" frequency is %d.", find, count);
	return 0;
}


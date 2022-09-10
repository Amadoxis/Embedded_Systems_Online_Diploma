/*
 * Q2.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#include<string.h>
int check(char str[],char str2[],int size);
int main(){
	char username[]={"Ahmed M. Rizk"},str[sizeof(username)+1];
	printf("Please enter the username (Hint: Ahmed M. Rizk)\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	check(str,username,sizeof(username));

	return 0;
}
int check(char str[],char str2[],int size){
	int flag=0,i=0;
	for(i=0;i<size;i++){
		if(str[i] != str2[i]){
			flag=1;
		}
	}
	if (flag==1){
		printf("incorrect username");
		return 1;
	}
	else{
		printf("correct username");
		return 0;
	}
}



/*
 * EX5.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	char x;

	while(1){
		printf("Enter a character:");
		fflush(stdin);fflush(stdout);
		scanf("%c",&x);

		if((x>='A' && x<='Z')||(x>='a' && x<='z')){
			printf("The character is an alphabet letter.\n");
		}
		else{
			printf("The character doesn't belong to the alphabet.\n");
		}
	}
	return 0;
}










/*setvbuf(stdout, NULL, _IONBF, 0);*/
/*fflush(stdin);fflush(stdout);*/

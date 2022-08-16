/*
 * EX2.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>
int check_vowel(char letter)
{
	return (letter=='a'||letter=='e'||letter=='i'||letter=='o'
			||letter=='u'||letter=='A'||letter=='E'||letter=='I'
					||letter=='O'||letter=='U');
}
int main(){
	char letter;
	/*setvbuf(stdout, NULL, _IONBF, 0);*/
	/*fflush(stdin);fflush(stdout);*/
	while(1){
		printf("Enter an alphabet letter:");
		fflush(stdin);fflush(stdout);
		scanf("%c",&letter);

		if(check_vowel(letter)){
			printf("The letter is a Vowel\n");
		}
		else{
			printf("The letter is a Consonant\n");
		}
	}
	return 0;
}

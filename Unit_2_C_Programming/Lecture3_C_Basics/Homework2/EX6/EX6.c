/*
 * EX6.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	int n,i,sum=0;


	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<=n;i++){
		sum+=i;
	}

	printf("Sum= %d", sum);
	return 0;
}










/*setvbuf(stdout, NULL, _IONBF, 0);*/
/*fflush(stdin);fflush(stdout);*/

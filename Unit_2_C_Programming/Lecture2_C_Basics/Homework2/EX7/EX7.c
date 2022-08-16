/*
 * EX7.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	int n,i,factorial=1;

	while (1){
		printf("Enter an integer:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			factorial*=i;
		}

		if(n>=0){
			printf("Factorial is: %d\n", factorial);
			factorial=1;
		}
		else{
			printf("Error!! No factorial for negative numbers!!\n");
		}
	}
	return 0;
}










/*setvbuf(stdout, NULL, _IONBF, 0);*/
/*fflush(stdin);fflush(stdout);*/

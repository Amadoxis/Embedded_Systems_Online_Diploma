/*
 * Ex1.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

int main(){
	int i,j;
	float mat1[2][2],mat2[2][2];
	printf("Enter the elements of Matrix 1\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d:",i+1,j+1);
			flush();
			scanf("%f",&mat1[i][j]);
		}
	}

	printf("Enter the elements of Matrix 2\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b%d%d:",i+1,j+1);
			flush();
			scanf("%f",&mat2[i][j]);
		}
	}
	printf("Sum of matrices is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%.1f\t",mat1[i][j]+mat2[i][j]);
			}
		printf("\n");
		}

	return 0;
}


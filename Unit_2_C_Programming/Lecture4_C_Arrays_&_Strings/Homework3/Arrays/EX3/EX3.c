/*
 * Ex3.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

int main(){
	int i,j,r,c;
	float matrix[100][100],transpose[100][100];

	printf("Please enter the rows and columns of the matrix (row, columns):-\n");
	flush();scanf("(%d, %d)",&r,&c);

	printf("Enter the elements of the Matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a%d%d:",i+1,j+1);
			flush();
			scanf("%f",&matrix[i][j]);
		}
	}
	printf("Original matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			transpose[j][i]=matrix[i][j];
			printf("%.1f\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix is:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%.1f\t",transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}


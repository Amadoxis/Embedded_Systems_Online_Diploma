/*
 * Ex3.c
 *
 *  Created on: Oct 2, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

struct SComplex {
	float real;
	float imag;
};

struct SComplex sum_complex(struct SComplex x, struct SComplex y );

int main(){
	struct SComplex x,y,z;
	printf("Please enter the first complex number (real,imag):-\n");
	printf("Complex 1:");flush();scanf("(%f,%f)",&x.real,&x.imag);
	printf("Please enter the second complex number (real,imag):-\n");
	printf("Complex 2:");flush();scanf("(%f,%f)",&y.real,&y.imag);
	z=sum_complex(x,y);
	printf("The sum is %.2f r %.2f i",z.real,z.imag);

	return 0;
}
struct SComplex sum_complex(struct SComplex x, struct SComplex y ){
	struct SComplex sum;
	sum.real=x.real+y.real;
	sum.imag=x.imag+y.imag;
	return sum;
}




/*
 * Ex1.c
 *
 *  Created on: Oct 2, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

struct SStudent {
	char name[100];
	int roll;
	float marks;
};

int main(){
	struct SStudent s;
	printf("Please enter the student's details:-\n");
	printf("Name:");flush();gets(s.name);
	printf("Roll:");flush();scanf("%d",&s.roll);
	printf("Marks:");flush();scanf("%f",&s.marks);
	printf("The student's information is:-\n");
	printf("Name: %s\n",s.name);
	printf("Roll: %d\n", s.roll);
	printf("Marks: %.2f", s.marks);
	return 0;
}



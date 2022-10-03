/*
 * Ex4.c
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
struct SStudent get_data(int roll);
void print_student(struct SStudent x);
int main(){
	int i;
	struct SStudent s[3]; /*should be 10 but reduced to speed things up*/
	for(i=0;i<3;i++){
		s[i]=get_data(i+1);
	}
	printf("The entered data is:-\n");
	for(i=0;i<3;i++){
		print_student(s[i]);
	}
	return 0;
}
struct SStudent get_data(int roll){
	struct SStudent x;
	x.roll=roll;
	printf("Please enter the data for roll number %d\n",x.roll);
	printf("Name:");flush();gets(x.name);
	printf("Marks:");flush();scanf("%f",&x.marks);
	printf("\n");
	return x;
}
void print_student(struct SStudent x){
	printf("Information for roll %d is:-\n",x.roll);
	printf("Name: %s\n",x.name);
	printf("Marks: %.2f\n\n",x.marks);
}







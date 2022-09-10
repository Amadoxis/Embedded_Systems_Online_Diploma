/*
 * EX8.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Ahmed Mostafa
 */
#include <stdio.h>

int main(){
	float a,b,result;
	char op;

	while (1){
		result=0;
		printf("Enter an number:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&a);
		printf("Enter a second number:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);
		printf("Choose an operation (+,-,*,/):");
		fflush(stdin);fflush(stdout);
		scanf("%c",&op);

		switch(op){
		case '+':result=a+b;printf("%.2f %c %.2f = %.2f\n\n",a,op,b,result);break;
		case '-':result=a-b;printf("%.2f %c %.2f = %.2f\n\n",a,op,b,result);break;
		case '*':result=a*b;printf("%.2f %c %.2f = %.2f\n\n",a,op,b,result);break;
		case '/':result=a/b;printf("%.2f %c %.2f = %.2f\n\n",a,op,b,result);break;
		default:printf("Error!! Not an operation!!\n");
		}
	}
	return 0;
}










/*setvbuf(stdout, NULL, _IONBF, 0);*/
/*fflush(stdin);fflush(stdout);*/

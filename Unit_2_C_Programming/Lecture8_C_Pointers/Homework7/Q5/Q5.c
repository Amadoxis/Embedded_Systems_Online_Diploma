/*
 * Q5.c
 *
 *  Created on: Oct 17, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

typedef struct SEmployee{
    char *name;
    int ID;
} Employee;

int main()
{
    int n;
    Employee Emp_1 = {"Ahmed", 1000}, Emp_2 = {"Mostafa", 1001}, Emp_3 = {"Sayed", 1002}, Emp_4 = {"Rizk", 1003};
    Employee *arr_str_ptr[] = {&Emp_1, &Emp_2, &Emp_3, &Emp_4};
    Employee(*(*p)[4]) = &arr_str_ptr;
    printf("Enter Employee Number to Display:(1-4):");
    flush();
    scanf("%d", &n);
    n--; /*Make n (0-3)*/

    printf("\nEmployee #%d:\nName :%s\nID=%d", n+1, (*(*p + n))->name, (*(*p + n))->ID);

    return 0;
}

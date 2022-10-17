/*
 * Q1.c
 *
 *  Created on: Oct 17, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

int main()
{
    int m = 29;
    int *ab;
    printf("Adress of m: %x\n", &m);
    printf("Value of m: %d\n\n", m);

    printf("Now ab is assigned with the adress of m.\n");
    ab = &m;
    printf("Adress in pointer ab: %x\n", ab);
    printf("Content of pointer ab: %d\n\n", *ab);

    printf("The value of m is assigned to 34 now.\n");
    m = 34;
    printf("Adress in pointer ab: %x\n", ab);
    printf("Content of pointer ab: %d\n\n", *ab);

    printf("The pointer variable ab is assigned with the value of 7 now.\n");
    *ab = 7;
    printf("Adress of m: %x\n", &m);
    printf("Value of m: %d\n\n", m);
    return 0;
}

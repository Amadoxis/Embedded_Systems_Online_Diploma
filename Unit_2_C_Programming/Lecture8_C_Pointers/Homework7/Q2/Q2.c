/*
 * Q2.c
 *
 *  Created on: Oct 17, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

int main()
{
    char c = 'A', *cc = &c;
    printf("The Alphabet Letters are:\n");

    while (c <= 'Z')
    {
        printf("%c   ", *cc);
        (*cc)++;
    }

    return 0;
}

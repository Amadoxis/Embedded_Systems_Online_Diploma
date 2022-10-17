/*
 * Q3.c
 *
 *  Created on: Oct 17, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>
#define flush(); fflush(stdin);fflush(stdout);

int main()
{
    char str[100], str_rev[100];
    char *p = str, *p_rev = str_rev;
    char length = 0;
    printf("Please enter a string:");
    flush();
    gets(str);
    while (*p)
    {
        p++;
        length++;
    }
    p--; /* point to last character before null */
    while (length > 0)
    {
        *p_rev = *p;
        p_rev++;
        p--;
        length--;
    }
    *p_rev = '\0'; /* terminate string */
    printf("Revered string is:%s", str_rev);
    return 0;
}

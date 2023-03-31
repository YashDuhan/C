#include <stdio.h>
#include <string.h> // included to use the basic functions of string operations

void main()
{
    char s1[100], s2[100];

    gets(s1); // function used to read a string
    gets(s2);

    printf(" lengths : %d %d\n", strlen(s1), strlen(s2));
}
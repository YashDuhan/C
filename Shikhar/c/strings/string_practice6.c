#include<stdio.h>

/* Write a program to count the occurrence of a given character in a string. */

int occurrence(char *st, char c)
{
    int count=0;
    char *ptr=st;
    while(*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "hello";
    int count = occurrence(st, 'l');
    printf("The occurrence of the given character is : %d\n",count);
    return 0;
}

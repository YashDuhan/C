#include<stdio.h>

/* Write a program to encrypt a string by adding 1 to the ASCII value to its characters */

void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0')
    {
        *ptr = *ptr + 1;
        *ptr++;
    }
}
int main()
{
    char c[] = "Shikhar";
    encrypt(c);
    printf("The encrypted string is : %s",c);
    return 0;
}

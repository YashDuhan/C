#include<stdio.h>

/* Write a program to decrypt the string encrypted in previous problem */

void decrypt(char *c)
{
    int i=0;
    char *ptr=c;
    while(ptr[i]!='\0')
    {
        *ptr = *ptr - 1;
        *ptr++;
    }
}
int main()
{
    char c[] = "Tijlibs";
    decrypt(c);
    printf("The decrypted string is : %s",c);

    return 0;
}

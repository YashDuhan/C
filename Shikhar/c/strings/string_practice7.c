#include<stdio.h>

/* Write a program to check whether a given character is present in a string or not. */

void present(char *st, char c)
{
    int count=0;
    char *ptr=st;
    while(*ptr!='\0')
    {
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    if (count > 0){
        printf("The character %c is present in the string\n",c);
    }
    else{
        printf("The character %c is not present in the string\n",c);
    }
}
int main()
{
    char st[] = "Shikhar";
    present(st, 'i');
    return 0;
}

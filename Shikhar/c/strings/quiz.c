#include<stdio.h>
int main()
{
    /* create a string using ""and print its content using loops */

    char str[] = "Shikhar";
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}

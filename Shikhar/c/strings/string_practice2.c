#include<stdio.h>

/* Write your own version of strlen function from <string.h> */

int string_length(char *st)
{
    char *ptr=st;
    int length=0;
    while(*ptr!='\0')
    {
        length++;
        ptr++;
    }
    return length;
}
int main()
{
    int st[50];
    printf("Enter the value of string : \n");
    scanf("%s",st);
    int l = string_length(st);
    printf("The length of the string is %d\n",l);
    return 0;
}

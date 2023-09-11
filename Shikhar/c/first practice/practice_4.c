#include<stdio.h>
int main()
{
    // write a program to determine whether a character entered by the user is lowercase or not
    // 97-122 = a-z

    char ch;
    printf("enter the character = ");
    scanf("%c",&ch);

    if (ch>=97 && ch<=122)
    {
        printf("the character %c is lowercase\n\n",ch);
    }
    else
    {
        printf("the character %c is not lowercase\n\n",ch);
    }

    return 0;
}

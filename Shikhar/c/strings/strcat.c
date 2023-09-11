#include<stdio.h>
#include<string.h>
int main()
{
    // strcat is used to concatenate(join) two strings

    char st1[] = "hello ";
    char st2[] = "Shikhar";

    strcat(st1,st2);
    printf("Now st1 is %s \n",st1);
    return 0;
}

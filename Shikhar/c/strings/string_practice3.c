#include<stdio.h>
#include<string.h>

/* Write your own version of strcpy function from <string.h> */

void copy(char *target, char *source)
{
    int i=0;
    while(source[i]!=0)
    {
        target[i]=source[i];
        i++;
    }
    target[i] = '\0';
}
int main()
{
    char source[] = "Hello";
    char target[] = "hi";

    printf("Value in target before copy function is : %s\n",target);
    copy(target, source);
    printf("Value in target after copy function is : %s\n",target);
    return 0;
}

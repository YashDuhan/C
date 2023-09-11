#include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "Shikhar";
    char target[] = "hello";

    printf("target before strcpy is %s\n",target);
    strcpy(target, source);  //target now contains source
    printf("target after strcpy is %s\n",target);

    return 0;
}

#include<stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    return 0;
}

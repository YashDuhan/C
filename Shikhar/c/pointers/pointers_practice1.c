#include<stdio.h>
//write a program to print the address of a variable to get the value of the variable
int main()
{
    int a=6;
    int *ptr;
    ptr = &a;
    printf("the address of the variable is %u\n",&a);
    printf("the address of the variable is %u\n",ptr);
    printf("the value of the variable is %d\n",*ptr);
    return 0;
}

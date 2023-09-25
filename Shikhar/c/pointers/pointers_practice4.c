#include<stdio.h>
/*      Write a program to print the value of a variable i
        using pointer to pointer type of variable.           */

int main()
{
    int i=345;
    int *ptr;
    int **ptr_ptr;

    ptr=&i;
    ptr_ptr=&ptr;

    printf("The value of i is %d",**ptr_ptr);
    return 0;
}

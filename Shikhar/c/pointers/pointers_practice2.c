#include<stdio.h>
/*      write a program having a variable i. Print the address of i.
        Pass This Variable to a function and print its address.
        Are these addresses same ? Why ?*/
void printAddress(int a);
int main()
{
    int i=4;
    printf("The address of i is %u\n",&i);
    printAddress(i);
    printf("The address of variable i is %u\n",&i);
    return 0;
}
void printAddress(int a)
{
    printf("The address of variable a is %u\n",&a);
}

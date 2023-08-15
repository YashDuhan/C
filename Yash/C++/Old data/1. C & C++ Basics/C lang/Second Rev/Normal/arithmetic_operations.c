#include <stdio.h>

int main()
{
    //addition
    printf("For addition");
    int a = 10, b = 4, res;
    //printing their result
    res=a+b;
    printf("\nthe output of %d and %d is %d", a,b,res);

    //subtraction
    printf("\n\nFor subtraction");
    //executing
    res = a-b;
    printf("\nthe difference between %d and %d is %d", a,b,res);

    //multiplication
    printf("\n\nFor multiplication");
    //executing
    res=a*b;
    printf("\nthe output of %d and %d is %d", a,b,res);
}
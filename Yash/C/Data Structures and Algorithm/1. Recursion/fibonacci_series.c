#include <stdio.h>
// nth fibonacci series
int fib(int a)
{
    if (a == 0) // base case to avoid segmentation fault
    {
        return 0;
    }
    else if (a == 1) // base case to return 1 if value of a reaches 1
    {
        return 1;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}

void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    /*
    // to print the final value
    printf("%d", fib(a));
    */

    // to print the whole series
    for (int i = 0; i < a; i++)
    {
        printf("%d, ", fib(i));
    }
}
#include<stdio.h>

// fibonacci series
int fib(int n);
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("The nth element of fibonacci series is %d",fib(n));
    return 0;
}
int fib(int n)
{
    if (n<=0)
    {
        printf("Invalid input.Please provide a positive integer.\n");
        return -1;
    }
    else if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

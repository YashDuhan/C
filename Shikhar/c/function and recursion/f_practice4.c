#include<stdio.h>
// write a recursive program to calculate the sum of first n natural numbers

int sum(int n);
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d\n",n, sum(n));
    return 0;
}
int sum(int n)
{
    if (n<=0)
    {
        printf("invalid input\n\n");
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}

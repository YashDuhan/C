#include<stdio.h>
int main()
{
    // write a program to calculate the factorial of a given number using a for loop

    int n;
    int factorial=1;
    printf("enter the number = ");
    scanf("%d",&n);
    printf("\n\n\n");

    for (int i=n; i>0; i--)
    {
        factorial = factorial * i;
    }
    printf ("the factorial of %d is %d\n\n",n,factorial);

    return 0;
}

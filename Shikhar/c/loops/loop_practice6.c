#include<stdio.h>
int main()
{
    // write a program to check whether a given number is prime or not using loops

    int n, i, prime=1;
    printf("enter the number = ");
    scanf("%d",&n);
    printf("\n\n");

    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            prime=0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n\n",n);
    }
    else
    {
        printf("%d is a prime number\n\n",n);
    }


    return 0;
}

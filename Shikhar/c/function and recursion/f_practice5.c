#include<stdio.h>
/*write a program using functions to print the following pattern (first n lines)
            *
            ***
            *****
                                */

void printPattern(int n);
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}
// for n=3
// *
// ***
// *****

// (2n-1)
void printPattern(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for(int i=0; i<(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}

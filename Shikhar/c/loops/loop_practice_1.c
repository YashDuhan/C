#include<stdio.h>
int main()
{
    // write a program to print multiplication table of a given number n

    int n,i=1;
    printf("enter a number = ");
    scanf("%d",&n);

    printf("\n\n");

    while(i<=10)
    {
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}

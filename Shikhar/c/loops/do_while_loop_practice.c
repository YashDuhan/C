#include<stdio.h>
int main()
{
    // write a program to print first n natural numbers using do-while loop

    int i=1;
    int n;
    printf("enter the numbers to be printed = ");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=n);

    return 0;
}

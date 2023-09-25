#include<stdio.h>
int main()
{
    // write a program to print n natural numbers in reverse order

    int n;
    printf("enter the value = ");
    scanf("%d",&n);

    printf("\n\n");
    for(int i=n; i>0; i--)
    {
        printf("the value of i is %d\n",i);
    }



    return 0;
}

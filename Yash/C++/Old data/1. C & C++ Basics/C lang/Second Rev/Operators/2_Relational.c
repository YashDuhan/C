#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("the number you entered is an even number");
    }
    else
    {
        printf("the number you entered is an odd number");
    }

    return 0;
}
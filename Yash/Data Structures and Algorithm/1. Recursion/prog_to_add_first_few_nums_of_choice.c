// program to add the first few numbers of a choice
//  the amount must be entered by the user itself

#include <stdio.h>

int sum(int a)
{
    if (a > 0)
    {
        return a + sum(a - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i;
    printf("Enter the number : ");
    scanf("%d", &i);
    printf("%d", sum(i));
}
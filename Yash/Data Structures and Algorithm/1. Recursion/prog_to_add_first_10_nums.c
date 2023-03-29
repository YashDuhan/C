// program to add the first 10 numbers

#include <stdio.h>

int sum(int a)
{
    if (a > 0)
    {
        return (a + sum(a - 1));
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d", sum(10));
}
// program to multiply the first few numbers inputted by user in c

#include <stdio.h>

int multiply(int a)
{
    if (a > 1)
    {
        return a * multiply(a - 1);
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i;
    printf("Enter your number : ");
    scanf("%d", &i);
    printf("%d", multiply(i));
}
#include <stdio.h>

int display(int n)
{
    printf("%d ", n);
}

int main()
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for (i = 0; i <= 6; i++)
    {
        display(marks[i]);
    }
}

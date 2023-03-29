#include <stdio.h>

// here the function print() will repeat itself to print hello three times

void print()
{
    printf("Hello\n");
}

void main()
{
    for (int i = 0; i < 3; i++)
    {
        print();
    }
}
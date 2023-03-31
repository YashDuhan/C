#include <stdio.h>

void main()
{
    int x[100]; // created an array with size 100
    int t;

    // to add the value into the x array upto 0 to 99
    for (t = 0; t < 100; ++t)
    {
        x[t] = t;
    }

    // to display the array after adding the values
    for (t = 0; t < 100; ++t)
    {
        printf("%d \n", x[t]);
    }
}
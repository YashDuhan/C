#include <stdio.h>

void function(int aeee[]);

int main()
{
    int aeee[2][3] = {{4, 5, 6}, {7, 8, 9}};
    function(aeee[1]);
}

void function(int aeee[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", aeee[i]);
    }
}
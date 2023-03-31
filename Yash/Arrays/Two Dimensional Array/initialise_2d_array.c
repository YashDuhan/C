#include <stdio.h>

int main()
{
    int stud[4][2] = {{1, 34}, {2, 43}, {3, 45}}; // the last index will be auto-intialised to 0,0

    for (int i; i <= 3; i++)
    {
        printf("\n%d %d", stud[i][0], stud[i][1]);
    }
}
#include<stdio.h>
int main()
{
    /* write a program to print natural numbers from 10 to 20 when initial loop
        counter i is initialized to 0*/

    int i=0;

    while(i<=10)
    {
        printf("the value of i is %d\n", (i+10));
        i++;    // i=i+1
    }


    return 0;
}

#include<stdio.h>
int main()
{
    /* syntax of for loop

        for (initialize; condition; increment/decrement)
        {code to be executed}   */

    for (int a=0; a<10; a++)
    {
        printf("*", a);
        for(int j=0; j<10; j++)
        {
            printf("*", j);
        }
        printf("\n");
    }


    return 0;
}

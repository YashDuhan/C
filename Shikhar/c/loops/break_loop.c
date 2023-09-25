#include<stdio.h>
int main()
{
    // for do while statement
    int i=0;
    do
    {
        printf("the value of i is %d\n",i);
        i++;
        if (i==4)
        {
            break;
        }
    }
    while(i<10);

    printf("\n\n\n");

    //break in for statement

    for (int i=0; i<100; i++)
    {
        printf("the value is %d\n", i+2);
        if (i==9)
        {
            break;
        }
    }



    return 0;
}

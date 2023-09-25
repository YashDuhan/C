#include<stdio.h>
int main()
{
    // write a program to calculate the sum of the numbers occurring in the table of 8


    int num, sum=0;
    for(int i=1; i<=10; i++)
    {
        num = 8 * i;
        sum = sum + num;
    }

    printf("the sum of numbers occurring in the table of 8 is %d \n\n",sum);


    return 0;
}

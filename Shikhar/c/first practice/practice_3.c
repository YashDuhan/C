#include<stdio.h>
int main()
{
    // To check whether the year is leap year or not

    int year;
    printf("enter the year = ");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        printf("the year %d is a leap year and has 366 days\n\n",year);
    }
    else
    {
        printf("the year %d is not a leap year and has 365 days\n\n",year);
    }

    return 0;
}

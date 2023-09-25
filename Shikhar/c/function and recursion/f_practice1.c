#include<stdio.h>

// write a program using functions to find average of three numbers

float average(int a, int b, int c);

int main()
{
    int a,b,c;
    printf("enter first number = ");
    scanf("%d",&a);
    printf("enter second number = ");
    scanf("%d",&b);
    printf("enter third number = ");
    scanf("%d",&c);

    average(a,b,c);

    printf("The average of three numbers is %.2f",average(a,b,c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a+b+c)/3;
    return result;
}

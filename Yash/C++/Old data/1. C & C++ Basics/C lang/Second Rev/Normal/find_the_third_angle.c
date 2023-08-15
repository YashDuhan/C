#include <stdio.h>

//the angle must be a whole number
int main()
{
    int a,b,c=0;
    printf("A program to find the third angle of a triangle");
    printf("\nType your first angle : ");
    scanf("%d",&a);
    printf("Type your second angle : ");
    scanf("%d",&b);
    c=180-(a+b);
    printf("The value of the third angle is %d",c);
    return 0;
}
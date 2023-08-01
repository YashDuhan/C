#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b=0;
    printf("A program to add two numbers");
    printf("\nType your 1st number here ");
    scanf("%d",&a);
    printf("Type the 2nd number here ");
    scanf("%d", &b);
    int output= a+b;
    printf("After adding %d and %d, We will get %d", a,b,output);
    printf("\nProgram ended here");
    getch();
    return 0;
}
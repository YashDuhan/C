#include<stdio.h>
#include<math.h>
int main()
{
    // write a program to print the area of a square using library functions

    int side;
    printf("Enter the value of side = ");
    scanf("%d",&side);
    printf("The area of the square is %.2f ",pow(side,2));
    return 0;
}

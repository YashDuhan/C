//the objective of this program is to find the square of a number

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("The square of %d is %d", a,a*a);
    getch();
    return 0;
}
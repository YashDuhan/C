#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a no. from 1 to 9 : ");
    scanf("%d",&a);
    while(a!=10)
    {
        printf("%d\n",a);
        a++;
    }
    getch();
}
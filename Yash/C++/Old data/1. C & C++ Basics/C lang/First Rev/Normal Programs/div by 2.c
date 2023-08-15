#include <stdio.h>
#include <conio.h>
int main()
{
        int num;
        printf("Enter a number to check it's divisibility by 2 : ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
                printf("Number is divisible by 2");
        }
        else
        {
                printf("Not divisble by 2");
        }
        getch();
}

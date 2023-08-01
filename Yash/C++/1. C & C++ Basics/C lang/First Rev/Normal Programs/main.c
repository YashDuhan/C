#include <stdio.h>
#include <conio.h>
int main()
{
        // to find square
        int a, b = 0;
        do
        {
                printf("\nPress 0 to exit the program");
                printf("\nEnter the number to find square: ");
                scanf("%d", &a);
                b = a * a;
                printf("\nOutput is%d", b);
        } while (b != 0);
        getch();
}

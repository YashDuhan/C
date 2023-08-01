#include <stdio.h>
#include <conio.h>
int main()
{
        int x;
        int z;
        printf("Press y to continue: ");
        scanf("%d", z);
        printf("Check Eligibility for Reservation:");
        printf("\n1. General\n2.SC\n3.ST\n4.OBC\n");
        printf("Select an option: ");
        scanf("%d", &x);
        if (x == 1)
        {
                printf("Not eligible");
        }
        else if ((x == 2) || (x == 3) || (x == 4))
        {
                printf("Congrats! You're Eligible");
        }

        printf("Add more y/n?");
        scanf("%d", z);
        getch();
}

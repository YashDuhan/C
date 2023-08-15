#include <stdio.h>
#include <conio.h>
int main()
{
        int i;
        printf("Check Eligibility for Reservation:");
        printf("\n1. General\n2.SC\n3.ST\n4.OBC\n");
        printf("Select an option: ");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
                printf("Not Eligible \n");
                break;
        case 2:
                printf("Eligible\n");
                break;
        case 3:
                printf("Eligible\n");
                break;
        case 4:
                printf("Eligible\n");
                break;
        default:
                printf("Invalid value \n");
        }
        getch();
}

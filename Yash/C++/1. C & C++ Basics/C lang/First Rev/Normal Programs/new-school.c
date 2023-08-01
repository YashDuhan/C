#include <stdio.h>
#include <conio.h>
void main()
{
        char fname[10];
        char lname[20];
        char confirm;
        printf("Enter your First Name : ");
        scanf("%s", &fname);
        printf("Enter your Last Name : ");
        scanf("%s", &lname);
        printf("Your first name is %s and Last name is %s", fname, lname);
        printf("\nPress Y to confirm...");
        scanf("%s", &confirm);
        if ((confirm == 'Y') || (confirm == 'y'))
        {
                printf("Welcome, %s %s", fname, lname);
        }
        getch();
}

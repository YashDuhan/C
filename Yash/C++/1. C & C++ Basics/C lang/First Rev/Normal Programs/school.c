#include <stdio.h>
#include <conio.h>
char main()
{
        char name, class, section;
        printf("Enter your name : ");
        scanf("%c", &name);
        printf("Enter your class : ");
        scanf("%c", &class);
        printf("Enter your section : ");
        scanf("%c", &section);

        int rollno, phone_number;
        printf("Enter your Roll Number : ");
        scanf("%d", &rollno);
        printf("Enter your Phone Number : ");
        scanf("%d", &phone_number);

        printf("\n~~~~Details are~~~~\nYour Name is ", name, "\nYou are studying in Class", class, " and section", section, "\n Your Roll Number is", rollno, "\nYour Phone Number is ", phone_number);
        getch();
}

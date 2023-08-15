#include <stdio.h>

int main()
{
    char first_name[40];
    char last_name[40];
    int roll_no;
    char section;
    char course[12];

    printf("Enter your First name : ");
    scanf("%s",first_name);
    printf("Enter your Last name : ");
    scanf("%s",last_name);
    printf("Enter your Roll number : ");
    scanf("%d",&roll_no);
    printf("Enter your section : ");
    scanf("%c",&section);
    printf("Enter your course : ");
    scanf("%s",course);

    printf("Your Full name is %s %s",first_name,last_name);
    printf("\nYour Roll number is %d",roll_no);
    printf("\nYour Section is %s",section);
    printf("\nYour Course is %s",course);

    return 0;
}
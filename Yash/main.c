#include <stdio.h>

int main()
{
    char first_name[20];
    char last_name[20];
    printf("Enter your first name : ");
    scanf("%s", first_name);
    printf("Enter your second name : ");
    scanf("%s", last_name);
    printf("Welcome,\nYour full name is %s %s", first_name, last_name);
}

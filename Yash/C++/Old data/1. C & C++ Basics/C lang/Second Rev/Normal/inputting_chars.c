#include <stdio.h>
 
int main()
{
    char first_name[20];
    char last_name[20];
    char college_name[40];
    char section;
    int roll_no;
 
    printf("Enter your first name: ");
    scanf("%s", &first_name);
    printf("Enter your last name: ");
    scanf("%s", &last_name);
    printf("Enter your college name: ");
    scanf("%s", &college_name);
    printf("Enter your section: ");
    scanf("%s", &section);
    printf("Enter your Roll number: ");
    scanf("%d", &roll_no);
 
    //output
    printf("\nYour full name is %s %s", first_name, last_name);
    printf("\nYour college's name is %s", college_name);
    printf("\nYou are in %c section", section);
    printf("\nYour roll number is %d", roll_no);
    printf("\nProgram ended!!!");
    return 0;
 
}
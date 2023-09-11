#include<stdio.h>
#include<string.h>

/* Write a program to store the details of 3 employees from user
defined data. Use the structure declared above. */

struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1, e2, e3;

     printf("The value of code for employee e1 is : ");
    scanf("%d",&e1.code);
    printf("The value of salary for employee e1 is : ");
    scanf("%f",&e1.salary);
    printf("The value of name for employee e1 is : ");
    scanf("%s",e1.name);

    printf("\n\nThe value of code for employee e2 is : ");
    scanf("%d",&e2.code);
    printf("The value of salary for employee e2 is : ");
    scanf("%f",&e2.salary);
    printf("The value of name for employee e2 is : ");
    scanf("%s",e2.name);

    printf("\n\nThe value of code for employee e3 is : ");
    scanf("%d",&e3.code);
    printf("The value of salary for employee e3 is : ");
    scanf("%f",&e3.salary);
    printf("The value of name for employee e3 is : ");
    scanf("%s",e3.name);

    return 0;
}

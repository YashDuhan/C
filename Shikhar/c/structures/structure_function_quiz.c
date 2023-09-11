#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};

void show(struct employee e)
{
    printf("The code of employee is : %d\n",e.code);
    printf("The salary of employee is : %.2f\n",e.salary);
    printf("The name of employee is : %s\n",e.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    (*ptr).code=101;
    (*ptr).salary=11.01;
    strcpy((*ptr).name, "Shikhar");

    show(e1);
    return 0;
}

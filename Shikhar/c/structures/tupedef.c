#include<stdio.h>
#include<string.h>

// Typedef is used to create an allias of the data types in c 

typedef struct employee{
    int code;
    float salary;
    char name[50];
} emp; 

void show(emp e)
{
    printf("The code of employee is : %d\n",e.code);
    printf("The salary of employee is : %.2f\n",e.salary);
    printf("The name of employee is : %s\n",e.name);
}

int main ()
{
    // declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;

    // set the member values for e1 
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name, "Shikhar");

    show(e1);
    return 0;
}
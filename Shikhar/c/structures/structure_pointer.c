#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101;   this will also work
    ptr->code = 101;    //this is arrow operator
    printf("%d", e1.code);
    return 0;
}

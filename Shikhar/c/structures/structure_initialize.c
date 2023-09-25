#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee harry = {100, 34.23, "Harry"};

    printf("code is %d\n", harry.code);
    printf("salary is %f\n", harry.salary);
    printf("name is %s\n", harry.name);
    return 0;
}

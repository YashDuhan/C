#include<stdio.h>
#include<string.h>

// arrays and strings : can store only similar data
// structures : it can store dissimilar data

struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.546;
    //e1.name = "Shikhar"; --> won't work
    strcpy(e1.name, "Shikhar");

    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}

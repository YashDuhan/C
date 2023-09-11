#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 100;
    strcpy(facebook[0].name, "Shikhar");

    facebook[1].code = 101;
    facebook[1].salary = 1.434;
    strcpy(facebook[1].name, "Rohan");

    facebook[2].code = 102;
    facebook[2].salary = 110.466;
    strcpy(facebook[2].name, "Rahul");

    return 0;
}

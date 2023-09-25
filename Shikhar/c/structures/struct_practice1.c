#include<stdio.h>

// create a two dimensional vector using structures in c 

struct vector {
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 45;
    printf("X dim is %d and Y dim is %d \n\n",v1.x,v1.y);

    v2.x = 3434;
    v2.y = 4532;
    printf("X dim is %d and Y dim is %d \n\n",v2.x,v2.y);

    return 0;
}
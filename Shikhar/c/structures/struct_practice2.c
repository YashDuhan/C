#include<stdio.h>

// Write a function sum vector which returns the sum of two vectors passed to it. The vectors must be two dimensional

struct vector {
    int x;
    int y;
};

struct vector sumVector (struct vector v1, struct vector v2){
    struct vector result;   
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main ()
{
    struct vector v1, v2, sum;
    v1.x = 3;
    v1.y = 5;
    printf("X dim is %d and Y dim is %d \n\n",v1.x,v1.y);

    v2.x = 4;
    v2.y = 2;
    printf("X dim is %d and Y dim is %d \n\n",v2.x,v2.y);

    sum = sumVector (v1, v2);
    printf("X dim of result is %d and Y dim of result  is %d \n\n",sum.x,sum.y);

    return 0;
}
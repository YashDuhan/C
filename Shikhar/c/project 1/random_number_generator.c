#include<stdio.h>
#include<stdlib.h>          // this library is used to generate random number
#include<time.h>

int main()
{
    int number;
    srand(time(0));
                                // rand() generates a random number from 0 to infinity
    number = rand()%100 + 1;    //generates a random number between 1 and 100

    printf("the number is %d",number);

    return 0;
}

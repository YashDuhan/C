#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output

int sum(int a, int b);  //function prototype declaration

int main()
{
    int result;
    result = sum(2, 15); // function call
    printf("The value of c is %d\n", result);
    return 0;
}

// a and b are parameters
// 2 and 15 are arguments

int sum (int a, int b)
{
    int c;
    c = a + b;
    return c;
}

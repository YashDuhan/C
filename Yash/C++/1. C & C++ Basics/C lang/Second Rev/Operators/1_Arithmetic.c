#include <stdio.h>

int main(){
    int a = 20;
    int b = 10;
    int output;
    
    //Addition
    output = a+b;
    printf("After adding %d and %d we will get %d", a,b,output);

    //Subtraction
    output = a-b;
    printf("\nAfter subtracting %d and %d we will get %d",a,b,output);

    //multiply
    output = a*b;
    printf("\nAfter multiplying %d and %d we will get %d", a,b, output);

    //divide
    output = a/b;
    printf("\nAfter dividing %d and %d we will get %d", a,b,output);

    //modulus 
    output = a % b;
    printf("\nThe modulus of %d and %d is %d",a,b,output);

    return 0;

}
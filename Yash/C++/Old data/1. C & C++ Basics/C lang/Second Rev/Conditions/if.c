#include <stdio.h>

int main()
{
    int a,b,result;
    int response;
    printf("Enter your first number : ");
    scanf("%d",&a);
    printf("Enter your second number :");
    scanf("%d",&b);
    printf("A calculator");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
    printf("\nChoose your response : ");
    scanf("%d",&response);
    if (response==1){ //Addition
        result=a+b;
        printf("After adding %d and %d we will get %d",a,b,result);
    }
    else if(response==2){ //Subtraction
        result = a-b;
        printf("After Subtracting %d and %d we will get %d", a,b,result);
    }
    else if(response==3){ //multiplication
        result = a*b;
        printf("After multiplying %d and %d we will get %d",a,b,result);
    }
    else if(response==4){ //division
        result = a/b;
        printf("After dividing %d and %d we will get %d", a, b, result);
    }
}
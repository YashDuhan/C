#include<stdio.h>
/*      Write a program using a function which calculate the sum and average
        of two numbers. Use pointers and print the values of sum and average in main() */
void fn(int a, int b, int *sum, float *avg);
int main()
{
    int a,b,sum;
    float avg;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    fn(a,b,&sum,&avg);
    printf("The sum of two numbers in %d\n",sum);
    printf("The average of two numbers in %.2f\n",avg);
    return 0;
}
void fn(int a, int b, int *sum, float *avg)
{
    *sum=a+b;
    *avg=(float)(*sum)/2;
}

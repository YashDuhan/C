#include<stdio.h>
int main()
{
    // write a program to sum first ten natural numbers in for loop

    int sum=0;
    for(int i=1; i<=10; i++)
    {
        sum=sum+i;
    }
    printf("the sum of first 10 natural numbers is %d\n\n",sum);

    // write a program to sum first ten natural numbers in while loop


    int Sum=0, a=1;
    while(a<=10)
    {
        Sum=Sum+a;
        a++;
    }
    printf("the sum of first 10 natural numbers is %d\n\n",Sum);

    // write a program to sum first ten natural numbers in do while loop

    int s=0, b=1;
    do{
        s=s+b;
        b++;
    }
    while(b<=10);
    printf("the sum of first 10 natural numbers is %d\n\n",s);

    return 0;
}

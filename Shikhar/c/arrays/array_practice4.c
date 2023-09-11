#include<stdio.h>

/* Write a program containing function which counts the positive integers in an array */

void positive_count(int *arr);
int main()
{
    int arr[10];
    printf("Enter the  10 elements of array : \n\n");
    int i=0;
    while(i<10)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    positive_count(arr);
    return 0;
}

positive_count(int *arr)
{
    int sum=0;
    for (int i=0; i<10; i++)
    {
        if (arr[i]>0)
        {
            sum=sum+1;
        }
    }
    printf("\nNumber of positive integers = %d\n",sum);
}

#include<stdio.h>

    /* write a program containing a function which reverses the array passed to it*/

void reverse(int *arr, int n);

int main()
{
    int arr[]={1,2,3,54,5,6,32};
    reverse(arr, 7);
    return 0;
}

void reverse(int *arr, int n)
{
    for (int i=n-1; i>=0; i--)
    {
        printf("%d\n",arr[i]);
    }
}

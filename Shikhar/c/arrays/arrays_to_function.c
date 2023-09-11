#include<stdio.h>
void print_array(int ptr[], int n);
int main()
{
    int arr[]={1,2,3543,34,3,645,23};
    print_array(arr, 7);
    return 0;
}
void print_array(int *ptr, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("The value of element %d is %d\n",i+1,ptr[i]);
    }
}

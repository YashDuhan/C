#include<stdio.h>
int main()
{
    /* create an array of 10 numbers. Verify using pointer arithmetic that
    (ptr+2) points to the third element where ptr is a pointer to the first element of the array.*/

    int arr [10];
    int *ptr=arr;
    ptr = ptr + 2;
    if (ptr==&arr[2])
    {
        printf("these points to the same location in memory\n");
    }
    else
    {
        printf("these do not points to the same location in memory\n");
    }
    return 0;
}

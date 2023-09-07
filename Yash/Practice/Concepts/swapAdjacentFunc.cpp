#include <iostream>
using namespace std;

int *swapAdjacent(int *arr,int size)
{
    int temp;
    for(int i =0; i<size-1;i++)
    {
        if(size%2 == 0)
        {
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
        }
    }
    return arr;
}

void printArray(int *arr, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;

    int *arr = new int[size];
    cout<<"Enter the elements : ";
    for(int i = 0; i<size;i++)
    {
        cin>>arr[i];
    }

    printArray(arr,size);
    swapAdjacent(arr,size);
    cout<<"Result after swapping";
    printArray(arr,size);


}
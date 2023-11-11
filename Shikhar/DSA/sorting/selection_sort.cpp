#include<iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {3,5,2,13,6};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Array before sorting : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    selectionSort(arr, size);
    cout<<"Array after selection sort : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    return 0;
}
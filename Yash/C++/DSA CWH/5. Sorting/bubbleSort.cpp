#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    bool isSorted; //isSorted function will check if the array is already sorted or not to avoid unnecessary comparisons
    for(int i = 0; i<size-1; i++) //for number of pass
    {
        isSorted = false;
        for(int j = 0; j<size-1; j++) //for comparison in each pass
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSorted = true;
            }
        }
        if(!isSorted)
        {
            break;
        }
    }
   
}

int main()
{
    int arr[] = {23,12,4,65,56};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    cout<<"Sorted Array is "<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
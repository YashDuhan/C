#include<iostream>
#include<algorithm>
using namespace std;

//Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the entire list is sorted.

// no. of passes = (no. of elements in array) - 1 

void bubbleSort(int arr[], int size)
{
    
    bool isSorted;
    for(int i=0; i<size-1; i++)
    {
        isSorted = false;
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSorted = true;
            }
        }
        if(!isSorted)
        {
            break;
        }
    }
}

int main(){
    int arr[] = {7,9,2,4,8};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Your array before sorting : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    bubbleSort(arr, size);
    cout<<"Your array before sorting : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    return 0;
}
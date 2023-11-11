#include<iostream>
using namespace std;

//Insertion sort is a simple sorting algorithm that works by building a sorted list one element at a time. It repeatedly takes an element from the unsorted part and inserts it into its correct position within the sorted portion of the list. 

void insertionSort(int arr[], int size)
{
    //loop for passes
    for(int i=1; i<size; i++)
    {
        //loop for each pass
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int arr[] = {12,57,65,7,23,9};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Array before sorting : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    insertionSort(arr, size);
    cout<<"Array after insertion sort : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    return 0;
}
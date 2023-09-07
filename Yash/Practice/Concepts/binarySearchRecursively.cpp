#include <iostream>
using namespace std;

int binarySearch(int arr[], int element, int start, int end)
{
    int middle_element = (start+end)/2;
    //base-case
    if(start>end)
    {
        return -1;
    }

    //recursive-function
    if(arr[middle_element] == element)
    {
        return middle_element;
    }
    if(arr[middle_element]<element)
    {
        return binarySearch(arr,element,middle_element+1,end);
    }
    else if(arr[middle_element]>element)
    {
        return binarySearch(arr,element,start,middle_element-1);
    }
    
}


int main()
{
    int size,element;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements : ";
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int start = 0;
    int end = size-1;
    cout<<"Enter the element to be searched : ";
    cin>>element;

    cout<<"The middle element is "<<binarySearch(arr,element,start,end);
}
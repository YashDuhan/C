#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12, 34, 43, 54, 67, 78};
    int element;
    int size = sizeof(arr)/sizeof(int);
    cout<<"Enter the element to be searched : ";
    cin>>element;
    int index = binary_search(arr, size, element);
    if (index != -1)
    {
        cout<<"The element "<<element<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<"The element "<<element<<" is not present in the array"<<endl;
    }
    return 0;
}
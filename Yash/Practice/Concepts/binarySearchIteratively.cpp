#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout<<"Enter the elements in the array :"; 
    for(int i = 0; i<n;i++)
    {
        cin >> arr[i];
    }

    int element;
    cout<<"Enter the element to be searched : ";
    cin>>element;

    int mid_index;
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        mid_index = (start+end)/2;
        if(arr[mid_index]<element)
        {
            start = mid_index+1;
        }
        else if(arr[mid_index]>element)
        {
            end = mid_index-1;
        }
        else if(arr[mid_index] == element)
        {
            cout<<"Element found at index "<< mid_index;
            break;
        }
    }
}
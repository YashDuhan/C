#include<iostream>
using namespace std;

void linear_search(int *arr,int size, int element)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if (arr[i] == element)
        {
            cout<<"The element "<<element<<" is found at index "<<i<<endl;
            count++;
        }
    }
    if(count == 0)
    {
        cout<<"The element "<<element<<" is not present in the array"<<endl;
    }
}

int main(){
    int arr[] = {12, 34, 43, 67, 54, 78};
    int element;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element to be searched : ";
    cin>>element;
    linear_search(arr,size, element);
    return 0;
}
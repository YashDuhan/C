#include <iostream>
using namespace std;

int main()
{
    int val;
    int index = -1;
    int arr[6] = {1,43,54,32,42,23};
    cout<<"Enter the element to be searched : ";
    cin>>val;
    for(int i = 0; i<val; i++)
    {
        if(arr[i] == val)
        {
            index = i;
            break;
        }
    }
    if(index != -1)
    {
        cout<<"Element found at index "<<index<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    
}
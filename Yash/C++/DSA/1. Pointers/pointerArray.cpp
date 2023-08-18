#include <iostream>
using namespace std;

int main()
{
    int *arr[10];
    int val;
    //insertion
    for(int i = 0; i<sizeof(arr);i++)
    {
        cout<<"Enter the value for index "<<i <<" : ";
        cin>>val
        arr[i] = val;
    }
    //print
    for(int i = 0; i<sizeof(arr);i++)
    {
        cout<<arr[i]<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int arr[20],pos,size,element,i;
    cout<<"enter the size of the array:";
    cin>>size;

    cout<<"enter the elements:";
    for (i=0;i<size;i++)
    {
        cin>>arr[i];    
    }

    cout<<"enter the element you want to insert:";
    cin>>element;

    cout<<"enter the position:";
    cin>>pos;

    for (i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    cout<<"element inserted successfully...!!";
    cout<<"the new array is:";

    for (i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


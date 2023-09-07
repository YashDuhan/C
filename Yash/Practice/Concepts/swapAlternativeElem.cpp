#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array : ";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The array is : "<<endl;
    for(int i = 0; i<n;i++)
    {
        cout <<arr[i]<<" ";
    }

    //swapping-elemns
    int temp;
    for(int i = 0; i<n;i++)
    {
        if(i%2 == 0) //changes are only taking place at even positions
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    //printing-updated arra
    cout<<"\nUpdated array : "<<endl;
    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}




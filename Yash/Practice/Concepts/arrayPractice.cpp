#include <iostream>
#include <string>
using namespace std;

int main()
{
    // //Question 1 
    // // Store 5 names in an array

    // string arr[5];
    // for(int i = 0; i<5; i++)
    // {
    //     cout<<"Enter name for student " <<i<<" : ";
    //     cin>>arr[i];

    // }
    // //print the array 
    // for(int i = 0; i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


    // //Question 2
    // //find the maximum number from an array
    // int arrr[6];
    // cout<<"Enter 6 numbers : ";
    // for(int i =0 ; i<6;i++)
    // {
    //     cin>>arrr[i];
    // }

    // int max = arrr[0];
    // for(int i = 0; i<6; i++)
    // {
    //     if(max < arrr[i])
    //     {
    //         max = arrr[i];
    //     }
    // }
    // cout<<"Max is "<<max<<endl;


    //Question 3
    //To check wether array is sorted or not
    int arr[6];
    cout<<"Enter nums : ";
    for(int i =0 ; i<6; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i<5; i++) // i<5 is used (last element of the array can be greater than the rest for it be sorted)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"Unsorted Array"<<endl;
            break;
        }
        else
        {
            cout<<"Sorted Array"<<endl;
            break;
        }

    }
}
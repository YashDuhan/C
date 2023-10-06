#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10,12,13,14,15,17};
    int size = sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter the element to be searched : ";
    cin>>target;
    int upper_limit = size-1;
    int lower_limit = 0;
    int middle_element = -1;
    while(upper_limit>=lower_limit)
    {
        middle_element = (upper_limit+lower_limit)/2;
        if(arr[middle_element]>target)
        {
            upper_limit = (middle_element-1);
        }
        else if(arr[middle_element]<target)
        {
            lower_limit = (middle_element+1);
        }
        else
        {
            break;
        }
    }
    cout<<"The element "<<target<< " is found at "<<middle_element<<endl;
}
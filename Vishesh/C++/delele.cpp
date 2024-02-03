#include <iostream>
using namespace std;  
#include <conio.h>  
  
int main ()  
{  
    // declaration of the int type variable  
    int arr[50];  
    int pos, i, num; // declare int type variable  
    cout<< " \n Enter the number of elements in an array: \n ";  
    cin>> (num);  
      
    cout<<" \n Enter %d elements in array: \n ";  
      
    // use for loop to insert elements one by one in array  
    for (i = 0; i < num; i++ )  
    {  
        cin>>arr[i];  
    }  
      
    // enter the position of the element to be deleted  
    cout<< " Define the position of the array element where you want to delete: \n ";  
    cin>>pos;  
      
    // check whether the deletion is possible or not  
    if (pos >= num+1)  
    {  
        cout<<" \n Deletion is not possible in the array.";  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        cout<<" \n The resultant array is: \n";  
          
        // display the final array  
        for (i = 0; i< num - 1; i++)  
        {  
            cout<<" arr[%d]"<<i;  
		    cout<<arr[i];    
        }  
    }  
    return 0;  
}  

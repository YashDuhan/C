#include <iostream>
using namespace std;

int *BinarySearch(int **arr, int row, int col, int element)
{
    int *index = new int[2];
    index[0] = -1;
    index[1] = -1
    

}
void printArray(int **arr,int row,int col)
{
    for(int i = 0; i<row;i++)
    {
        for(int j = 0; j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

int main()
{
    int row,col;
    cout<<"Enter the row and col : ";
    cin>>row>>col;

    //dynamic allocation of 2d array 
    int **arr = new int *[row];
    for(int i = 0; i<row;i++)
    {
        arr[i] = new int[col];
    }

    cout<<"Enter the elements of the Array ";
    for(int i =0; i<row;i++)
    {
        for(int j = 0; j<col;j++)
        {
            cout<<"Enter the value for index "<<i<<" and "<<j<<" : ";
            cin >> arr[i][j];
        }
    }

    printArray(arr,row,col);
}
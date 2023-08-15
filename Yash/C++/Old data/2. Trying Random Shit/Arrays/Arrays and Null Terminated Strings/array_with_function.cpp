#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[1] << " ";
    }
    cout << " Printing the Array" << endl;
}

int main()
{
    int third[15] = {2, 7};
    printArray(third, 15);

    int fourth[10] = {2};
    printArray(fourth, 10);
}
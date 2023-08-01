#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "Printing the Array" << endl;
    // print the whole array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Done" << endl;
}

int main()
{
    int third[15] = {2, 7};
    printarray(third, 15);

    int thirdsize = sizeof(third) / sizeof(int);
    cout << "Size is " << thirdsize;
}
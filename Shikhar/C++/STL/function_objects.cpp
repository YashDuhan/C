#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// Function objects (Functors): Function wrapped in a class so that it is available like an object

int main()
{
    int arr[] = {23, 2, 43, 57, 32, 1, 25};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    cout << "Array: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }

    sort(arr, arr + 7); // it sorts the elements in ascending order
    cout << "Array after sorting in ascending order: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }

    sort(arr, arr + 7, greater<int>()); // it sorts the elements in descending order
    cout << "Array after sorting in descending order: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
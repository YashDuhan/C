#include <iostream>
#include <climits> //to use INT_MIN in line 23
using namespace std;

int main()
{
    // to take input from the user
    int n;
    cin >> n;
    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }

    int max = INT_MIN; // will automaticall take the minimum integer value an integer can hold
    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }

    cout << "Max :" << max << endl;
}
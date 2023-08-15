#include <iostream>
using namespace std;

int main()
{
    // take input from user

    int n;
    cin >> n;
    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    // print array
    for (int i = 0; i < 100; i++)
    {
        cout << input[i] << endl;
    }
}
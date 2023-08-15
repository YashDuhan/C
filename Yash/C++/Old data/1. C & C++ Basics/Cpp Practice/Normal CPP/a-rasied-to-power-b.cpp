#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "num" << endl;
    cin >> a >> b;

    int value = 1;
    for (int i = 1; i <= b; i++)
    {
        value = value * a;
    }
    cout << a << " raised to power " << b << " is " << value << endl;
}
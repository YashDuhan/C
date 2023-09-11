#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the value of x = " << endl;
    cin >> x;
    cout << "Enter the value of y = " << endl;
    cin >> y;

    cout << endl
         << "Before swapping :- " << endl;
    cout << "x= " << x << "     y = " << y << endl;
    swap(&x, &y);
    cout << endl
         << "After swapping :- " << endl;
    cout << "x= " << x << "     y = " << y << endl;

    return 0;
}
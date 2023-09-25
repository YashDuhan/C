#include <iostream>
using namespace std;

int main()
{
    // pointer is a datatype which stores the address of other datatype

    int a = 3;
    int *b = &a;

    cout << "The address of a is : " << &a << endl;
    cout << "The address of a is : " << b << endl;

    cout << "The value stored in address of b is : " << *b;
    return 0;
}
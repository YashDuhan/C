#include <iostream>
using namespace std;

class Base
{
protected: // it is like private but can be inherited
    int a = 5;

private:
    int b = 10;

public:
    int c = 15;
};

/*

For a protected member:
                        ||    Public Derivation ||   Private derivation ||   Protected Derivation
    ====================||======================||======================||=========================
    1. Private members  ||  Not inherited       ||   Not inherited      ||   Not inherited
    2. Protected members||  Protected           ||   Private            ||   Protected
    3. Public members   ||  Public              ||   Private            ||   Protected

*/

class Derived : public Base
{
};

int main()
{
    Base b;
    Derived d;

    // cout<<d.b; // will not work
    // cout<<d.a; // will not work

    cout << d.c;
    return 0;
}
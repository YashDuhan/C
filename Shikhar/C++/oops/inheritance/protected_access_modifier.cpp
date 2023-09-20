#include <iostream>
using namespace std;

class Base
{
protected: // it is like private but can be inherited
    int a;

private:
    int b;
};

/*

For a protected member: 
                        ||    Public Derivation ||   Private derivation ||   Protected Derivation
    ====================||======================||======================||=========================
    1. Private members  ||  Not inherited       ||   Not inherited      ||   Not inherited
    2. Protected members||  Protected           ||   Private            ||   Protected
    3. Public members   ||  Public              ||   Private            ||   Protected

*/

class Derived: protected Base
{
};

int main()
{

    return 0;
}
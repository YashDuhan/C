#include <iostream>
using namespace std;

void f( const int *p)
{
        (*p)++;
}


int main()
{
        int const i = 10;

        int const *p = &i;

        int j =12;

        int *p3 = &j;
        f(p3);

        const *p2 = &j;
        cout << *p2 << endl;
        j++;
        cout << *p2 << endl;
}

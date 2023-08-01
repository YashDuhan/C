#include <iostream>
using namespace std;


//pointers are variables which can store address of other variable

//syntax
/*
   int*p=&i;
 */

int main()
{
        int i=100;
        cout << &i << endl;
        int * p = &i;
        cout << p << endl;

        cout<<*p<<endl;

/*
    float f = 10.2;
    float *pf =&f;
    cout<<pf<<endl;


    double d=122.32;
    double *pd = &d;
    cout<<pd<<endl;
 */
}

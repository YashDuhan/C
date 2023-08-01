#include <iostream>
using namespace std;

int main()
{
        int i =10;
        int *p=&i;

        cout<<p<<endl;
        p=p+2;
        cout<<p<<endl;

        cout<<p<<endl;
        p=p-2;
        cout<<p<<endl;

        double d=102.3;
        double *dp=&d;
        dp++;
        cout<< dp << endl;
}

#include <iostream>
using namespace std;

int main()
{
    //type *name
    int count = 10;
    int *m = &count;
    cout<<"Count : "<<count<<endl; //will return the actual value of count
    cout<<"M : "<<m<<endl; //will return the address of count associated with m
    cout<<"*M : "<<*m<<endl; //will use that address and fetch the values from the address(i.e. will print the value of count)
    cout<<"&count : "<<&count<<endl;//will work exactly like m(i.e. return the corresponding address)
}
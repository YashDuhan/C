#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p1, *p2;
    cout<<"value of *p1 is "<<*p1<<" and value of *p2 is "<<*p2<<endl; //will return a garbage value
    p1 = &x;
    p2 = p1; //here the p1 is pointing to x and p2 is pointing to p2
    cout<<"Address of p1 is "<<p1<<endl<<"Address of p2 is "<<p2<<endl; //both will have  the same address
    cout<<"Value of p1 is "<<*p1<<endl<<"Value of p2 is "<<*p2<<endl;
}
#include <iostream>
using namespace std;


int r;
float pi=3.14;
void areaofcircle()
{
        cout<<pi*r*r;
}

int main()
{
        cout<<"Enter the radius"<<endl;
        cin>>r;
        cout<<"The area or Circle is ";
        areaofcircle();
}

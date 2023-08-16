#include <iostream>
using namespace std;

int main()
{
    int *p1;
    cout<<"Address of p1 is "<<p1<<endl;
    cout<<"Value of p1 is "<<*p1<<endl;
    p1++;
    cout<<"Address of p1 is "<<p1<<endl;
    cout<<"Value of p1 is "<<*p1<<endl;
    p1++;
    cout<<"Address of p1 is "<<p1<<endl;
    cout<<"Value of p1 is "<<*p1<<endl; 
    //out pointer is of integer type so after every p1++; the pointer will shift every bytes
    //e.g 
    // Address of p1 is 0xe616b0
    // Address of p1 is 0xe616b4
    // Address of p1 is 0xe616b8
    //4 bytes are being added every time

    cout<<endl<<endl<<endl;
    int c = 10;
    int *p2 = &c;
    cout<<"Address of p2 is "<<p2<<endl;
    cout<<"Value of p2 is "<<*p2<<endl; // will print 10
    p2++; //now pointer is pointing at a different address
    cout<<"Address of p2 is "<<p2<<endl; //address will get incremented by 4 bytes
    cout<<"Value of p2 is "<<*p2<<endl; //garbage value
    p2++;
    cout<<"Address of p2 is "<<p2<<endl;
    cout<<"Value of p2 is "<<*p2<<endl; 



    cout<<endl<<endl<<endl;
    //pointer Arithmetic in values
    int val = 100;
    int *p3 = &val;
    cout<<"The values of *p3 is "<<*p3<<endl;
    cout<<"The address of p3 is "<<p3<<endl;
    *p3++; //garbage values
    cout<<"The values of *p3 is "<<*p3<<endl;
    cout<<"The address of p3 is "<<p3<<endl;
    *p3++;
    cout<<"The values of *p3 is "<<*p3<<endl;
    cout<<"The address of p3 is "<<p3<<endl;

    cout<<endl<<endl<<endl;
    //Another case
    int value = 20;
    int *p4,*p5;
    p4 = &value;
    p5= p4;
    cout<<"The value for p5 is : "<<*p5<<endl;
    *p5 = *p4+10; //again will return garbage values
    cout<<"The value for p5 is : "<<*p5<<endl;

    cout<<endl<<endl<<endl;
    //Another case
    int xc = 10;
    int *p6 = &xc;
    cout<<"The value of xc before incerementing : "<<xc<<endl;
    cout<<"The value of *p6 before incrementing : "<<*p6<<endl;
    cout<<"The address ppf xc is : "<<p6<<endl;
    xc++; //if xc got updated then p6 also got updated along with it
    cout<<"The value of xc after incerementing : "<<xc<<endl;
    cout<<"The value of *p6 after incrementing : "<<*p6<<endl;
    cout<<"The address ppf xc is : "<<p6<<endl; //address will also remain the same 
}
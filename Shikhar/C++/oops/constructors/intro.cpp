#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    // creating a constructor
    // constructor is a special member functionwith same name as of the class.  
    // it is used to initialize the objects of its class
    // It is automatically invoked(called) whenever an object is created.

    complex(void); // constructor declaration

    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex::complex(void)
{
    a = 10;
    b = 0;
}

int main(){
    complex c;
    c.printNumber(); 
    return 0;
}

/*
chaaracteristics of constructors:- 

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever thee object is created 
3. Do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/
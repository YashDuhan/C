#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    complex(int x, int y); // constructor declaration

    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main(){
    // implicit call
    complex a(4,6);
    a.printNumber();
    
    // explicit call
    complex b = complex(5,7);
    b.printNumber();
    return 0;
}
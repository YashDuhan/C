#include<iostream>
using namespace std;

class complex
{
    int real, imaginary;
public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void get_data(void)
    {
        cout<<"The value of real number is "<<real<<endl;
        cout<<"The value of imaginary number is "<<imaginary<<endl;
    }
};

int main(){
    complex *ptr = new complex;
    // (*ptr).set_data(4, 5);       // it is exactly same as
    ptr->set_data(4,5);

    // (*ptr).get_data();       // it is exactly same as
    ptr->get_data();
    return 0;
}
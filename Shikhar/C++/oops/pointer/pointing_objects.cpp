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
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    (*ptr).set_data(4, 5);
    (*ptr).get_data();
    return 0;
}
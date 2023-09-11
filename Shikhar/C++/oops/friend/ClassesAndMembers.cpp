#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // INdividually declaring functions as friends
    // friend int calculator ::sumCompComplex(complex o1, complex o2);
    // friend int calculator ::sumRealComplex(complex o1, complex o2);

    // istead of declaring each function we can declare the calculator class as its friend
    friend class calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    calculator calc;
    int resReal = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << resReal << endl;
    int resComp = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resComp << endl;

    return 0;
}
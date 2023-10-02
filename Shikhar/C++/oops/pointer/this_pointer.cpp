#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void set_data(int a)
    {
        // a = a;   // this will not show any error but will throw garbage value in the output
        this->a = a;
    }
    void get_data(void)
    {
        cout << "The value of a is " << a << endl;
    }
};

// "this" is a keyword which is a pointer which points to the object which invokes the member function

int main()
{

    A abc;
    abc.set_data(4);
    abc.get_data();

    return 0;
}
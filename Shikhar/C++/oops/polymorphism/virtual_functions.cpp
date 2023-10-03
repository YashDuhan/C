#include<iostream>
using namespace std;

/*
A member function in the base class which is declared using virtual keyword is called virtual functions. They can be redefined in the derived class.
*/
class Base
{
public:
    int var_base = 5;
    virtual void display()
    {
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
    }
};

class Derived: public Base
{
public:
    int var_derived = 10;
    void display()
    {
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"Displaying Base class variable var_derived "<<var_derived<<endl;
    }
};

int main(){
    Base *base_class_pointer;

    Base obj_base;
    Derived obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
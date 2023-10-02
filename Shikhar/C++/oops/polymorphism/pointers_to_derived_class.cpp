#include<iostream>
using namespace std;

class Base
{
public:
    int var_base = 5;
    void display()
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

    base_class_pointer = &obj_derived;  // pointing base class pointer to derived class
    
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 234;   //will not throw an error
    base_class_pointer->display();

    Derived *Derived_class_pointer;
    Derived_class_pointer = &obj_derived;
    
    Derived_class_pointer->var_derived = 2300;
    Derived_class_pointer->var_base = 2350;
    Derived_class_pointer->display();
    return 0;
}
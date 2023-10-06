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
/*
Rules for virtual functions:- 
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual virtual function is defined in a base class, there is no necessity of redifining it in the derived class.
*/
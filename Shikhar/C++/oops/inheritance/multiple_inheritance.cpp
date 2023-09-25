#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
/*
    class derived_class: visibility-mode base1, visibility-mode base2
    {
        class body of derived_class
    };
*/

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived: public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is "<<base1int<<endl;
        cout << "The value of base2 is "<<base2int<<endl;
        cout << "The value of base3 is "<<base3int<<endl;
        cout << "The sum of these values is "<<base1int + base2int + base3int<<endl;
    }
};
/*
    the inherited derivedd class will look something like this :
    data members:
        base1int --> protected
        base2int --> protected
        base3int --> protected
    
    member functions:
        set_base1int --> public
        set_base2int --> public
        set_base3int --> public
        show --> public
*/
int main()
{
    derived obj;
    obj.set_base1int(25);
    obj.set_base2int(5);
    obj.set_base3int(15);
    obj.show();
    return 0;
}
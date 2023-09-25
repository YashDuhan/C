#include<iostream>
using namespace std;

class base1
{
public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};
class base2
{
public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};
class derived: public base1, public base2
{
    int a;
public:
    void greet(){
        base1::greet();
    }
};
int main(){
    base1 base1obj;
    base2 base2obj;
    derived d;

    base1obj.greet();
    base2obj.greet();
    d.greet();
    return 0;
}
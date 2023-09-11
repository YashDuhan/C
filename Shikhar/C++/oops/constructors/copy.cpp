#include<iostream>
using namespace std;

class number 
{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    //when no copy constructor is found, compiler supplies its own copy constructor

    number(number &obj){
        cout<<endl<<endl<<"Copy constructor called"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout<<"The number of the object is "<<a<<endl;
    }

};
int main(){
    number x, y, z(45);
    x.display();
    y.display();
    z.display();


    number z1(x);  //z1 sholud exactly resemble like x
    z1.display();

    number z2 = z;
    z2.display();
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

/*
Abstract Base Class in C++

Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.
*/
/*
Pure Virtual Functions in C++

Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.
*/

class person
{
protected:
    string name;
    int age;
public:
    virtual void get(){}    // normal virtual function
    virtual void display()=0;   // do nothing function-->  pure virtual function
};

class student: public person
{
    int id;
public:
    void get()
    {
        cout<<"Enter name, age and id of thee student"<<endl;
        cin>>name>>age>>id;
    }
    void display()
    {
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Id: "<<id<<endl<<endl;
    }
};
int main(){
    person *per;
    student raw;

    per = &raw;

    per->get();
    per->display();
    return 0;
}
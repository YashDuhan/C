#include<iostream>
using namespace std;

// base class
class employee
{
    int id;
    float salary;
public:
    employee(int inpId)
    {
        id = inpId;
    
    }
};

// derived class syntax
/*
    class {derived class name} : {visibility mode} {base class name}
    {
        class members/methods/etc...
    }
*/

// creating a programmer class derived from employee base class
int main(){
    
    return 0;
}
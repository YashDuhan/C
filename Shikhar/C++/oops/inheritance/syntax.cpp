#include <iostream>
using namespace std;

// base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {}
};

// derived class syntax
/*
    class {derived class name} : {visibility mode} {base class name}
    {
        class members/methods/etc...
    }
note:
1. Default visibility mode is private
2. PUBLIC VISIBILITY MODE : Public members of the base class becomes  public members of the derived class
3. PRIVATE VISIBILITY MODE : Private members of the base class becomes  private members of the derived class
4. Private members of the base class are never inherited.
*/

// creating a programmer class derived from employee base class

class programmer : public employee
{
public:
    int languageCode = 9;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}
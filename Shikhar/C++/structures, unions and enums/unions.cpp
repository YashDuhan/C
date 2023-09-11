#include <iostream>
using namespace std;

// in structures, its each element has beel allocated space in the memory whereas in unions, elements share the memory space. Therefore, only one element of the memory can be used at a time.

union money
{
    int rice;
    char car;
    float salary;
};
int main()
{
    union money m1;
    m1.rice = 10;
    m1.car = 'c';

    cout << m1.rice << endl; // it will return a garbage value
    cout << m1.car << endl;
    return 0;
}
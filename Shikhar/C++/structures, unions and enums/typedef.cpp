#include <iostream>
using namespace std;

typedef struct employee
{
    int id;
    char favChar;
    float salary;
} ep;
int main()
{
    ep harry;
    harry.id = 101;
    harry.favChar = 'c';
    harry.salary = 1200000;

    cout << harry.id << endl;
    cout << harry.favChar << endl;
    cout << harry.salary << endl;
    return 0;
}
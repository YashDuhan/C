#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {78, 65, 56, 89};
    int *p = marks;

    cout << "The value at marks 0 = " << *p << endl;
    cout << "The value at marks 1 = " << *(p + 1) << endl;
    cout << "The value at marks 2 = " << *(p + 2) << endl;
    cout << "The value at marks 3 = " << *(p + 3) << endl;
    return 0;
}
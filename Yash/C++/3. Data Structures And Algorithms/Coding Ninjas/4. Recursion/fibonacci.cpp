// Fibonacci Numbers
/* 0 1 1 2 3 5 8
here the sum of  first 2 numbers is equal to third one
e.g 0+1=1, 1+1=2 1+2=3 2+3=5 ....upto infinity
*/

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int smalloutput1 = fib(n - 1);
    int smalloutput2 = fib(n - 2);
    return smalloutput1 + smalloutput2;
}

int main()
{
    cout << fib(6) << endl;
}
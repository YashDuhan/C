//Program to calculate the power of 2 Recursively 
#include <iostream>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // relation
    return 2 * power(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans;
    ans = power(n);

    cout << ans << endl;
}
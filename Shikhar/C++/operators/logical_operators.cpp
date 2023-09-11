#include<iostream>
using namespace std;

int main()
{
    // logical operators
    int a = 4, b = 5;
    cout << "operators in c++"<<endl;
    cout << "Following are the types of the logical operators in c++"<<endl<<endl;

    cout << "The value of logical and operator ((a==b) && (a<b)) is : "<< ((a==b) && (a<b))<<endl;
    cout << "The value of logical and operator ((a==b) || (a<b)) is : "<< ((a==b) || (a<b))<<endl;
    cout << "The value of logical and operator (!(a==b)) is : "<< (!(a==b))<<endl;
    return 0;
}
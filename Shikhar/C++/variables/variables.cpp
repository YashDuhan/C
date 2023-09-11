#include<iostream>
using namespace std;

int c = 45;     //This is a global variable

int main (){
    int a,b,c;  // these are local variables
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    c = a + b;
    cout<<endl<<"The value of local variable 'c' is = "<<c;
    cout<<endl<<"The value of global variable 'c' is = "<<::c;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    // pointer to poiter variable stores the address of another pointer

    int a = 3;
    int* b = &a;

    int** c = &b;
    cout<<"The value stored in the address of c is : "<<*c<<endl;  // address of a
    cout<<"The value stored in the value of c is  : "<<**c<<endl;  // value of a
    return 0;
}
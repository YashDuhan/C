#include<iostream>
using namespace std;

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"The value in fibonnaci series at position "<<n<<" is "<<fib(n);
    return 0;
}
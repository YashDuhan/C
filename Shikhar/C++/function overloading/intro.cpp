#include<iostream>
using namespace std;

int sum (int a, int b){
    return a+b;
}
int sum (int a, int b, int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a, b and c = "<<endl;
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<" & "<<b<<" is : "<<sum(a, b)<<endl;
    cout<<"sum of "<<a<<", "<<b<<" & "<<c<<" is : "<<sum(a, b, c)<<endl;
    return 0;
}
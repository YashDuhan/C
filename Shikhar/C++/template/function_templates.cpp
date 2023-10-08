#include<iostream>
using namespace std;

template<class T1, class T2>

float funcAverage(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;   
}
int main(){
    float a;
    a = funcAverage(5, 2.43);
    cout<<"The average of the numbers is: "<<a;

    int x = 5, y = 7;
    cout<<endl<<"1st number before swapping = "<<x<<endl;
    cout<<"2nd number before swapping = "<<y<<endl;
    swapp(x,y);
    cout<<endl<<"1st number after swapping = "<<x<<endl;
    cout<<"2nd number after swapping = "<<y<<endl;
    return 0;
}
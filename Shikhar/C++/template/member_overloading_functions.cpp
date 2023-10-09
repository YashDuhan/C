#include<iostream>
using namespace std;

template <class T>
class Marks
{
    float avg;
public:
    T a,b;
    Marks(T num1, T num2)
    {
        a = num1;
        b = num2;
        avg = (a+b)/2.0;
    }
    void display();
};
template <class T>
void Marks<T>::display()
{
    cout<<"The average of "<<a<<" & "<<b<<" is: "<<avg<<endl;
}

// overlading of function
void func(int a)
{
    cout<<"I am first func()"<<endl;
}

template <class T>
void func(T a)
{
    cout<<"I am a templatized fuc()"<<endl;
}

int main(){
    Marks<int> obj(4,5);
    obj.display();

    func(4);    // Exact match takes the highest priority
    return 0;
}
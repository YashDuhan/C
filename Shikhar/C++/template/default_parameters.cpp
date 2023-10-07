#include<iostream>
#include<cstring>
using namespace std;

template <class T1=int, class T2=char>
class def
{
public:
    T1 data1;
    T2 data2;

    def(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
        {
            cout<<this->data1<<this->data2<<endl;
        }
};

int main(){
    def <>obj(19, 'S');
    obj.display();
    return 0;
}
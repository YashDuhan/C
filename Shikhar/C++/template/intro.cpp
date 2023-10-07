#include<iostream>
using namespace std;

template <class T>
class vector
{
public:
    T* arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    /*
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
    */
    vector(vector &v1, vector &v2, int m)
    {
        T d = 0;
        size = m;
        for(int i=0; i<size; i++)
        {
            d += v1.arr[i] * v2.arr[i];
        }
        cout<<"The dot product is: "<<d<<endl;
    }
};
int main(){
    vector <float>v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.1;
    v1.arr[2] = 5.6;

    vector <float>v2(3);
    v2.arr[0] = 3.7;
    v2.arr[1] = 4.4;
    v2.arr[2] = 6.2;

    /*
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    */
    vector <float>result(v1, v2, 3);
    return 0;
}
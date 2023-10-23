#include<iostream>
using namespace std;

class Array
{
    int total_size;
    int used_size;
    int *ptr;
public: 
    Array(int t_size, int u_size)
    {
        total_size = t_size;
        used_size = u_size;
        ptr = new int[t_size];
    }
    void setVal()
    {
        for(int i=0; i<used_size; i++)
        {
            cout<<"Enter the value at index "<<i<<" : ";
            cin>>ptr[i];
        }
    }
    void show()
    {
        cout<<"Your array is: "<<endl;
        for(int i=0; i<used_size; i++)
        {
            cout<<ptr[i]<<"  ";
        }
        cout<<endl<<endl;
    }
    void deletion(int index)
    {
        for(int i = index; i < used_size-1; i++)    
        {
            ptr[i] = ptr[i+1];
        }
        used_size = used_size-1;
    }
};
int main(){
    Array marks(10, 5);
    marks.setVal();
    marks.show();
    marks.deletion(3);
    cout<<endl<<"After deleting "<<endl;
    marks.show();
    return 0;
}
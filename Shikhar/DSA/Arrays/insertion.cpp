#include<iostream>
using namespace std;

class Array
{
    int total_size;
    int used_size;
    int *ptr;
public: 
    void createArray(int t_size, int u_size)
    {
        total_size = t_size;
        used_size = u_size;
        ptr = new int[t_size*sizeof(int)];
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
    void insert(int index, int value)
    {
        if (used_size >= total_size)
        {
            cout<<"Value can't be inserted"<<endl;
            return;
        }
        used_size = used_size+1;
        for(int i=used_size-1; i>index; i--)    //shifting from backwards
        {
            ptr[i] = ptr[i-1];  // Shift elements to the right to make space for the new value
        }
        ptr[index] = value;
    }
};
int main(){
    Array marks;
    marks.createArray(10, 5);
    marks.setVal();
    marks.show();
    marks.insert(3, 40);
    cout<<endl<<"After inserting "<<endl;
    marks.show();
    return 0;
}
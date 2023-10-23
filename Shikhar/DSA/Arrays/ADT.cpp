#include<iostream>
using namespace std;

class myArray
{

public:
    int total_size;
    int used_size;
    int* ptr;
};

void createArray(myArray *obj, int tSize, int uSize)
{
    obj->total_size = tSize;
    obj->used_size = uSize;
    obj->ptr = new int[tSize*sizeof(int)];
}

void setVal(myArray *obj)
{
    for(int i=0; i < obj->used_size; i++)
    {
        cout<<"Enter the value for index "<<i<<" : ";
        cin>>(obj->ptr)[i];
    }
}

void showArray(myArray *obj)
{
    for(int i=0; i < obj->used_size; i++)
    {
        cout<<(obj->ptr)[i]<<"  ";
    }
}
int main(){
    myArray marks;
    createArray(&marks, 10, 2);
    setVal(&marks);
    showArray(&marks);

    return 0;
}
#include <iostream>
using namespace std;

class myArray
{
public:
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(class myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = new int[tSize*sizeof(int)];
}

void setVal(class myArray *a)
{
    for(int i =0; i<(a->used_size);i++)
    {
        
        cout<<"Enter the value for index "<<i <<" : ";
        cin>>(a->ptr)[i];
    }
}

void showArray(class myArray *a)
{
    for(int i = 0; i<a->used_size;i++)
    {
        cout<<(a->ptr)[i]<<endl;
    }
}

void insertArray(class myArray *a, int position, int value)
{
    for(int i = a->used_size; i>position; i--) //shifting from backwards
    {
        (a->ptr)[i] = (a->ptr)[i-1]; // Shift elements to the right to make space for the new value
    }
    (a->ptr)[position] = value;
    a->used_size++;
}

void deleteFromArray(class myArray *a, int position)
{
    for(int i = position; i<(a->used_size); i++)
    {
        (a->ptr)[i] = (a->ptr)[i+1];
    }
    a->used_size--;
}

int main()
{
    myArray marks;
    createArray(&marks,10, 2);
    setVal(&marks);
    showArray(&marks);
    insertArray(&marks, 0, 30);
    showArray(&marks);
    deleteFromArray(&marks, 1);
    showArray(&marks);
    return 0;
    
}
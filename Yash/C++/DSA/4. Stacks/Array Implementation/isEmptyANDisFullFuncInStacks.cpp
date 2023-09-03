#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[10];
    int index = 0;
public:
    void push(int x)
    {
        arr[index] = x;
        index++;
    }
    void display()
    {
        for(int i = 0; i<index;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    int top()
    {
        if(index == 0)
        {
            cout<<"Stack is empty!!";
            return -1;
        }
        else
        {
            return arr[index-1]; //top most element is index-1
        }
    }

    void pop()
    {
        if(index == 0)
        {
            cout<<"Stack Underflow(Stack is Empty)"<<endl;
        }
        else{
            //empty locations in an array are represented by 0s
            arr[index-1] = 0; 
            index--; //fixed the index value to new top
        }
    }

    bool isEmpty()
    {
        if(index == 0)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull()
    {
        if(index == sizeof(arr)/4) // size of int arr[10] = 40 => int has 4*10;
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st;
    cout<<"Stack is Empty? : "<<st.isEmpty()<<endl;
    st.push(1);
    cout<<"Stack is Empty? : "<<st.isEmpty()<<endl;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    cout<<"Whole Stack"<<endl;
    st.display();
    cout<<"Stack is Full ? : "<<st.isFull()<<endl;
    st.push(10);
    cout<<"Stack is Full ? : "<<st.isFull()<<endl;
    cout<<"Updated Stack "<<endl;
    st.display();
}
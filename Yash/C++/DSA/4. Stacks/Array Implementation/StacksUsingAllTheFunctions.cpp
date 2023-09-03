#include <iostream>
using namespace std;

class  Stack
{
private:
    int arr[10];
    int index = 0;

public:
  void push(int x)
    {
        if(isFull())
        {
            cout<<"Stack Overflow(Stack is full)"<<endl;
        }
        else
        {
            arr[index] = x;
            index++;
        }
    }
    void display()
    {
        if(index == 0)
        {
            cout<<"Stack is empty, Can't display"<<endl;
        }
        else
        {
        for(int i = 0; i<index;i++)
        {
            cout<<arr[i]<<endl;
        }
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
        if(isEmpty())
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
    cout<<"Top element is "<<st.top()<<endl;
    st.pop();
    cout<<"Top element is "<<st.top()<<endl;
    cout<<"Stack is Full ? : "<<st.isFull()<<endl;
    st.push(10);
    st.push(11);
    cout<<"Stack is Full ? : "<<st.isFull()<<endl;
    cout<<"Trying to execute :  st.push(12);"<<endl;
    st.push(12);
    
    Stack st2;
    cout<<"Trying to display an empty stack  "<<endl;
    st2.display();
    cout<<"Trying to pop an element from an empty stack "<<endl;
    st2.pop();

}

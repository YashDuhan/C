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
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Whole Stack"<<endl;
    st.display();
    st.pop();
    cout<<"Element popped "<<endl;
    cout<<"Updated Stack"<<endl;
    st.display();


}
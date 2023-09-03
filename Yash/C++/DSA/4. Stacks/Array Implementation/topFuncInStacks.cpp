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
    cout<<"\nTop most element is "<<st.top()<<endl;
}




#include <iostream>
using namespace std;

class Stack
{
    private:
    int arr[10];
    int indx = 0;
    public:
    void push(int x)
    {
        arr[indx] = x;
        indx++;
    }

    void display()
    {
        for(int i = 0; i<indx;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
}
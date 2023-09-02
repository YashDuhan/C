#include <iostream>
#include <stack>
using namespace std;

void displayStack(stack<int> st)
{
    if(st.size() == 0)
    {
        return;
    }
    int element = st.top();
    //cout<<element<<" "; it will print the stack in reversed order 
    st.pop();
    displayStack(st);
    cout<<element<<" "; //it will print the stack in normal order
}
int main()
{
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayStack(st);
    return 0;
}
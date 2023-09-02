#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> st;
    int size;
    cout<<"Enter the size of the stack : "<<endl;
    cin>>size;
    int data;
    cout<<"Enter the elements : "<<endl;
    //insert-elem
    for(int i = 0; i<size; i++)
    {
        cin>>data;
        st.push(data);
    }
    //printing stack
    while(!(st.size() == 0))
    {
        data = st.top();
        cout<< data << " ";
        st.pop();
    }

    return 0;
}
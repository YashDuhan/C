#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> st1;
    int data = 0;
    cout<<"Enter data(press -1 to stop entering ) : "<<endl;
    cin>>data;
    while(data!= -1)
    {
        st1.push(data);
        cin>>data;
    }

    //copy-stack
    stack <int> st2;

    while(!(st1.size() == 0))
    {
        int element = st1.top();
        st2.push(element);
        st1.pop();
    }

    //printing st2;
    while(!(st2.size() == 0))
    {
        cout<<st2.top()<< " ";
        st2.pop();
    }
}
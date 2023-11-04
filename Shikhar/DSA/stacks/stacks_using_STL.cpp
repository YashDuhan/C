#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s)
{
    cout<<"Your stack is : "<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int pop(stack<int> &s)
{
    int a = s.top();
    s.pop();
    return a;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    display(s);

    int a = s.size();
    cout<<"the size of the stack is : "<<a<<endl;

    int b = s.top();
    cout<<"the top most element of the stack is : "<<b<<endl;

    int c = pop(s);
    cout<<"the popped element is : "<<c<<endl;
    display(s);

    stack<int> n;
    n.push(111);
    n.push(222);

    cout<<endl<<"Before swapping:-"<<endl<<endl;
    cout<<"First stack : "<<endl;
    display(s);
    cout<<endl<<"Second stack : "<<endl;
    display(n);
    cout<<endl;

    n.swap(s);

    cout<<"After swapping:-"<<endl<<endl;
    cout<<"First stack : "<<endl;
    display(s);
    cout<<endl<<"Second stack : "<<endl;
    display(n);
    cout<<endl;

    return 0;
}
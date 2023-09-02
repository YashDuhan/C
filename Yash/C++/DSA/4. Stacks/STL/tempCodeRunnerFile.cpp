#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s1;
    stack <int> s2;
    int data = 0;

    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);

    cout<<"Before insertion"<<endl;
    while(!(s1.size() == 0))
    {
        cout<<s1.top()<< " ";
        s1.pop();
    }

    cout<<"\nEnter the value to be inserted : ";
    cin>>data;

    while(!(s1.empty()))
    {
        s2.push(s1.top());
        s1.pop();
    }
    
    //inserting at bottom;
    s1.push(data);

    //inserting-the-data-back
    while(!(s2.empty()))
    {
        s1.push(s2.top());
        s2.pop();
    }

    //printing the stack;
    cout<<"After insertion"<<endl;
    while(!(s1.size() == 0))
    {
        cout<<s1.top()<< " ";
        s1.pop();
    }
    return 0;
}
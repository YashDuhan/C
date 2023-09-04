#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q1;
    queue <int> q2;
    int data;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout<<"Enter the element to be inserted at the bottom : ";
    cin>>data;
    cout<<"Before Insertion "<<endl;
    queue <int> temp = q1;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }

    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    q1.push(data);

    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }

    cout<<"\nAfter Insertion "<<endl;
    temp = q1;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }

}
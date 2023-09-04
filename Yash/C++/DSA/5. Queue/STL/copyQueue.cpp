#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q1;
    queue <int> q2;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    //display q2;
    while(!q2.empty())
    {
        cout<<q2.front()<<endl;
        q2.pop();
    }
}
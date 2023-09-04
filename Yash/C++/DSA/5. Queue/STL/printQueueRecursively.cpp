#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue <int> q1)
{
    //base-case
    if(q1.empty())
    {
        return;
    }
     //recrusive-call
    cout<<q1.front()<< " ";
    q1.pop();
    printQueue(q1);
     
}

int main()
{
    queue <int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    printQueue(q1);
}
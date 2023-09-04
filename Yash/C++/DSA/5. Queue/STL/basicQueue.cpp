#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    int val = 60;
    q1.push(val);

    //printing-queue
    queue <int> temp1 = q1;
    while(!temp1.empty())
    {
        cout<<temp1.front()<<endl;
        temp1.pop();
    }

}
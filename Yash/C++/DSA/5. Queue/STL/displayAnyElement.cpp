#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int index;
    int element;
    queue <int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    cout<<"Enter the index to be printed : "<<endl;
    cin>> index;
    for(int i = 0; i<index;i++)
    {
        element = q1.front();
        q1.pop();
    }

    cout<<"The element is "<<element<<endl;
}
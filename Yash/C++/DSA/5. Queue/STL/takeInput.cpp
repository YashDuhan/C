#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q1;
    int data;
    cout<<"Enter the data to be inserted(Enter -1 to stop entering) : ";
    cin>>data;

    while(data != -1)
    {
        q1.push(data);
        cin>>data;
    }

    //print
    while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
}
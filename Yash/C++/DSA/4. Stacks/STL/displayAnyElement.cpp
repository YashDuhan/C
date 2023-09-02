#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int ind;
    stack <int> s1;
    cout<<"Enter the index : ";
    cin>>ind;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);

    stack <int> temp = s1;
    int element;
    for(int i = 0; i<=ind;i++)
    {
        element = temp.top();
        temp.pop();
    }

    cout<<"The element is "<<element<<endl;
}
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    int a = 60;
    stack.push(60);

    while(!stack.empty())
    {
        cout<< stack.top()<<" ";
        stack.pop();
    }

}
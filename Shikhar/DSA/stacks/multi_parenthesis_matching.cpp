#include<iostream>
#include<stack>
using namespace std;

int pop(stack<char> &s)
{
    int a = s.top();
    s.pop();
    return a;
}
bool match(char a, char b)
{
    if(a == '(' && b == ')')
    {
        return true;
    }
    if(a == '[' && b == ']')
    {
        return true;
    }
    if(a == '{' && b == '}')
    {
        return true;
    }
    return false;
}
bool parenthesisMatch(stack<char> s, char *exp)
{
    int popped;
    for(int i=0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(s.empty())
            {
                return false;
            }
            else
            {
                if(match(s.top(),exp[i]))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    stack<char> s;
    char exp[] = "[{(a+b)-(c*a)/(a+c)}*{2*a-4*(a+c-d)}]";
    if(parenthesisMatch(s, exp))
    {
        cout<<"The parenthesis is matching"<<endl;
    }
    else
    {
        cout<<"The parenthesis isn't matching"<<endl;
    }
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

bool parenthesisMatch(stack<char> s, char *exp)
{
    for(int i=0; exp[i]!='\0'; i++) //'\0' is the last character of the char array
    {
        if(exp[i] == '(')
        {
            s.push('(');
        }
        else if(exp[i] == ')')
        {
            if(s.empty())
            {
                return false;
            }
            s.pop();
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
    char exp[] = "(a+b*((c-d)/e))";
    if(parenthesisMatch(s, exp))
    {
        cout<<"The parenthesis is matching"<<endl;
    }
    else
    {
        cout<<"The parenthesis isn't matching"<<endl;
    }    return 0;
}
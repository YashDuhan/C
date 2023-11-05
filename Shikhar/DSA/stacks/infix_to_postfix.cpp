#include<iostream>
#include<stack>
using namespace std;

/*
Infix => operand_1 + operator + operand_2
Prefix => operator + operand_1 + operand_2
Postfix => operand_1 + operand_2 + operator
*/

bool parenthesisMatch(string exp)
{
    stack<char> s;
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
bool isOperand(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return true;
    }
    else if(c >= 'a' && c <= 'z')
    {
        return true;
    }
    else if(c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int precedence(char oper) //oper = operator
{
    if(oper == '+' || oper == '-')
    {
        return 1;   // they have the lowest priority
    }
    else if(oper == '*' || oper == '/')
    {
        return 2;   // they have the 2nd highest priority
    }
    else if(oper == '^')
    {
        return 3;   // it has the highest priority
    }
    else 
    {
        return -1;
    }
}
string convert(string infix)
{
    if(!parenthesisMatch(infix))
    {
        string p = "Parenthesis is not matching";
        return p;
    }
    stack<char> st;
    string postfix;
    for(int i=0; i<infix.length(); i++)
    {
        char c = infix[i];
        if(isOperand(c))
        {
            postfix = postfix + c;
        }
        else if(c == '(')
        {
            st.push(c);
        }
        else if(c == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                postfix = postfix + st.top();
                st.pop();
            }
            if(!st.empty() && st.top() == '(')
            {
            st.pop();// After the execution of the loop, it will pop the opening parenthesis
            }
        }
        else
        {
            while(!st.empty() && precedence(c)<=precedence(st.top()))
            {
                postfix = postfix + st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        postfix = postfix + st.top();
        st.pop();
    }
    return postfix;
}
int main()
{
    string infix;
    infix = "c+a*(b/d)-e^a";
    string postfix = convert(infix);
    cout<<"Your given infix expession is : "<<endl<<infix<<endl;
    cout<<"Your converted postfix expression is : "<<endl<<postfix<<endl;
    return 0;
}
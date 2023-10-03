#include <iostream>
#include <stack>
using namespace std;

//functions
bool isOperand(char c)
{
    if(c >='A' && c<= 'Z')
    {
        return true; //char lies between A to Z
    }
    else if(c>= 'a' && c<= 'z')
    {
        return true; //char lies between a to z
    }
    else if(c>= '0' && c<='9')
    {
        return true; //char lies between 0 to 9
    }
    else
    {
        return false;
    }

}

int precedence(char oper)
{
    if(oper == '+' || oper == '-')
    {
        return 1; //+ and - have the lowest precedence
    }
    else if(oper == '*' || oper == '/')
    {
        return 2; //they have the 2nd highest priority
    }
    else if(oper == '^')
    {
        return 3; //it has the highest priority
    }
    else
    {
        return -1;
    }
}

string convert(string infix)
{
    stack <char> st;
    string postfix;

    for(int i = 0; i<infix.length(); i++)
    {
        char c = infix[i];
        if(isOperand(c))
        {
            postfix = postfix+c;
        }
        else if(c == '(')
        {
            st.push('(');
        }
        else if(c == ')')
        {
            while(st.top() != '(')
            {
                postfix = postfix+st.top(); //if ) is encountered then the while loop will run until the top most element of stack is equals to (
                st.pop();
            }
            st.pop(); //after this loop gets executed we will be left with an open parenthesis and we don't want to include that into our postfix
        }
        else
        {
            while(!st.empty() && precedence(infix[i])<= precedence(st.top())) //infix[i] == c
            {
                postfix = postfix+st.top();
                st.pop(); //popping the top element after inserting into postfix
            }
            st.push(c); //pushing all other operators, other than ( and )
        }
    }

    //pop all the  remaining elements
    while(!st.empty())
    {
        postfix = postfix+st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infix = "a+b*(c^d-e)^(f+g*h)-i";

    cout<<"The postfix string is "<<convert(infix)<<endl;;
}
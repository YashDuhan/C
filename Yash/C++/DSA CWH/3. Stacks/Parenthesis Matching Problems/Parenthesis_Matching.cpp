#include <iostream>
using namespace std;

class stack
{
    public:
    int size;
    int top;
    char *arr;

    //functions
    void createstack(stack *stack, int st_size, int st_top);
    bool isEmpty(stack *stack);
    bool isFull(stack *stack);
    void push(stack *stack, char data);
    char pop(stack *stack);
    bool parenthesisMatch(stack *stack,char *exp);
};

void stack::createstack(stack *stack, int st_size, int st_top)
{
    stack->size = st_size;
    stack->top = st_top;
    stack->arr = new char[st_size*sizeof(int)]; //created a stack with the desired size
}

bool stack::isEmpty(stack *stack)
{
    if(stack->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool stack::isFull(stack *stack)
{
    if(stack->top == (stack->size-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void stack::push(stack *stack, char data)
{
    if(isFull(stack))
    {
        cout<<"Stack Overflow "<<endl;
    }
    else
    {
        stack->top++;
        stack->arr[stack->top] = data;
    }
}

char stack::pop(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"Stack Underflow";
        return -1;
    }
    else
    {
        char value = stack->arr[stack->top];
        stack->top--;
        return value;
    }
}




bool stack::parenthesisMatch(stack *stack,char *exp)
{
    for(int i = 0; exp[i] != '\0';i++) //did \0 because the character arrays have this end character at the end
    {
        if(exp[i] == '(')
        {
            push(stack,'('); //pushed (
        }
        else if(exp[i] == ')')
        {
            if(isEmpty(stack))
            {
                return false; //check if underflow
            }
            pop(stack);
        }
    }
    if(isEmpty(stack))
    {
        return true;//stack is empty all the paranthesis has matched
    }
    else 
    {
        return false; //stack still has some pending paranthesis
    }
}


int main()
{
    stack *s = new stack;
    s->createstack(s,100,-1);
    char exp[] = "8*7(84+43)+5()()+4";

    if(s->parenthesisMatch(s,exp))
    {
        cout<<"The parenthesis is matching"<<endl;
    }
    else
    {
        cout<<"The parenthesis isn't matching"<<endl;
    }
    
    return 0;
}
#include<iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;

    void createStack(stack *stack, int st_size);
    bool isEmpty(stack *stack);
    bool isFull(stack *stack);
    void push(stack *stack, int data);
    int pop(stack *stack);
    int peek(stack *stack);
    void display(stack *stack);
    int stackTop(stack *stack);
    int stackBottom(stack *stack);
};

void stack::createStack(stack *stack, int st_size)
{
    int st_top = -1;

    stack->size = st_size;
    stack->top = st_top;
    stack->arr = new int[st_size];
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
    if(stack->top == (stack->size - 1))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void stack::push(stack *stack, int data)
{
    if(isFull(stack))
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        stack->top++;
        stack->arr[stack->top] = data;
    }
}

int stack::pop(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"Stack underrflow"<<endl;
        return -1;
    }
    else
    {
        int value = stack->arr[stack->top];
        stack->top--;
        return value;
    }
}

int stack::peek(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else
    {
        return stack->arr[stack->top];
    }
}

void stack::display(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        for(int i=0; i<=stack->top; i++)
        {
            cout<<"The element at index "<<i<<" is : "<<stack->arr[i]<<endl;
        }
    }
}

int stack::stackTop(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else
    {
        return stack->arr[stack->top];
    }
}

int stack::stackBottom(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"The stack is empty."<<endl;
        return -1;
    }
    else
    {
        return stack->arr[0];
    }
}

int main(){
    stack *st1 = new stack;
    st1->createStack(st1, 4);
    st1->push(st1, 5);
    st1->push(st1, 4);
    st1->push(st1, 7);
    st1->push(st1, 88);

    st1->display(st1);

    int popval = st1->pop(st1);
    cout<<"The popped element is "<<popval<<endl;
    return 0;
}
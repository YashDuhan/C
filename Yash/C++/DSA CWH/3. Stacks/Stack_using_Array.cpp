#include <iostream>
using namespace std;

class stack
{
    public:
    int size;
    int top;
    int *arr;

    //functions
    void createstack(stack *stack, int st_size, int st_top);
    bool isEmpty(stack *stack);
    bool isFull(stack *stack);
    void push(stack *stack, int data);
    int pop(stack *stack);
    int peek(stack *stack);
    void display(stack *stack);
    int stackTop(stack *stack);
    int stackBottom(stack *stack);
};

void stack::createstack(stack *stack, int st_size, int st_top)
{
    stack->size = st_size;
    stack->top = st_top;
    stack->arr = new int[st_size*sizeof(int)]; //created a stack with the desired size
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

void stack::push(stack *stack, int data)
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

int stack::pop(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"Stack Underflow";
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
        cout<<"Stack is Empty"<<endl;
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
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        for(int i = 0; i<stack->top+1;i++) //added 1 because the the value of top was initialized with -1; (it's used to print the top element of the stack)
        {
            cout<<"The element present at index "<<i<<" is "<<stack->arr[i]<<endl;
        }
    }
}

int stack::stackTop(stack *stack)
{
    if(isEmpty(stack))
    {
        cout<<"Stack is Empty"<<endl;
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
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else
    {
        return stack->arr[0]; //it will the store the bottom most element
    }
}


int main()
{
    stack *s = new stack;
    s->createstack(s,10,-1);

    //push-element
    s->push(s,1);
    s->push(s,2);
    s->push(s,3);
    s->push(s,4);
    s->push(s,5);
    s->push(s,6);

    //pop-element
    cout<<"The popped element is :"<<s->pop(s)<<endl;

    //peek
    cout<<"The top most element is : "<<s->peek(s)<<endl;

    //display
    cout<<endl<<"The elements are : "<<endl;
    s->display(s);

    //stack-top
    cout<<"StackTop: "<<s->stackTop(s)<<endl;

    //stack-bottom
    cout<<"StackBottom :"<<s->stackBottom(s)<<endl;
    return 0;
}
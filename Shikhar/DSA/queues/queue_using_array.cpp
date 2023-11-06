#include<iostream>
using namespace std;

class queue
{
    int size;
    int front;
    int rear;
    int *arr;
public:
    void createQueue(queue *queue, int size);
    bool isFull(queue *queue);
    bool isEmpty(queue *queue);
    void enqueue(queue *queue, int data);
    void dequeue(queue *queue);
    void display(queue *queue);
};

void queue::createQueue(queue *queue, int size)
{
    this->size = size;
    queue->front = -1;
    queue->rear = -1;
    queue->arr = new int[size];
}
bool queue::isFull(queue *queue)
{
    if(queue->rear < queue->size - 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool queue::isEmpty(queue *queue)
{
    if(queue->front == -1 && queue->rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void queue::enqueue(queue *queue, int data)
{
    if(isFull(queue))
    {
        cout<<"Queue overflow"<<endl;
    }
    else
    {
        queue->rear++;
        queue->arr[queue->rear]=data;
    }
}
void queue::dequeue(queue *queue)
{
    if(isEmpty(queue))
    {
        cout<<"Queue underflow"<<endl;
    }
    else
    {
        int a;
        queue->front++;
        a = queue->arr[queue->front];
        cout<<endl<<"The dequeued element is : "<<a<<endl;
    }
}
void queue::display(queue *queue)
{
    if(isEmpty(queue))
    {
        cout<<endl<<"Queue is Empty"<<endl<<endl;
    }
    else
    {
        cout<<endl<<"Your Queue is : "<<endl;
        for(int i=(queue->front + 1); i<=(queue->rear); i++)
        {
            cout<<queue->arr[i]<<"     ";
        }
        cout<<endl;
    }
}

int main(){
    queue *q = new queue;
    q->createQueue(q, 10);
    q->display(q);
    q->enqueue(q, 10);
    q->enqueue(q, 20);
    q->enqueue(q, 30);
    q->enqueue(q, 40);
    q->enqueue(q, 50);
    q->display(q);
    q->dequeue(q);
    q->display(q);
    return 0;
}
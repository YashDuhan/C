#include <iostream>
using namespace std;

//Insertions will take place from rear and deletion from front

class queue
{
    public:
    int size;
    int front;
    int rear;
    int *arr;
    
    //functions
    void createQueue(queue *queue, int size);
    bool isFull(queue *queue);
    bool isEmpty(queue *queue);
    void enqueue(queue *queue, int data);
    int dequeue(queue *queue);

    
};

void queue::createQueue(queue *queue, int size)
{
    this->size = size;
    queue->front = -1;
    queue->rear = -1; //initialized both front and rear from -1
    queue->arr = new int[size*sizeof(int)];
}

bool queue::isFull(queue *queue)
{
    if(queue->rear == queue->size-1)
    {
        return true;
    }
    else
    {
        return false;
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
        cout<<"This Queue is full"<<endl;
    }
    else
    {
        queue->rear++; //While executing this program for the first time, we incremented the rear to make it 0 from -1
        queue->arr[queue->rear] = data; //inserted the data at the queue->rear index
    }
}

int queue::dequeue(queue *queue)
{
    int a = -1;
    if(isEmpty(queue))
    {
        cout<<"Underflow error"<<endl;
    }
    else
    {
        queue->front++;
        a = queue->front;
    }
    return a;
}

int main()
{
    queue *q1 = new queue;
    int val;
    q1->createQueue(q1,10);

    q1->enqueue(q1,1);
    
    cout<<"Enter the numbers to be inserted (Enter -1 to stop inserting) :";
    cin>>val;
    while(val != -1)
    {
        q1->enqueue(q1,val);
    }
    cout<<"DeQueuing element : "<<q1->dequeue(q1)<<endl;
}
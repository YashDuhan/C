#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

Node *TakeInput()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    
    int value;
    cout<<"Enter the valur to be inserted(press -1 to stop inserting) : ";
    cin>>value;
    while(value != -1)
    {
        Node *temp = new Node(value);
        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        cout<<"Enter the valur to be inserted(press -1 to stop inserting) : ";
        cin>>value;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<"     ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head;
    head = TakeInput();
    print(head);
    return 0;
}
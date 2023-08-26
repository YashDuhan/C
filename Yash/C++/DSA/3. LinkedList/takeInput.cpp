#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

Node *takeInput()
{
    int value;
    cout<<"Enter the value to be inserted(press -1 to stop inserting values) : ";
    cin>>value;
    Node *head = nullptr;
    Node *tail = nullptr;
    while(value != -1)
    {
        Node *tempNode = new Node(value);
        if(head == nullptr)
        {
            head = tempNode;
            tail = tempNode;
        }
        else{
            tail->next = tempNode;
            tail= tempNode;
        }
        cin>>value;

    }
    return head;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while(temp!= nullptr)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = takeInput();
    printLinkedList(head);
}
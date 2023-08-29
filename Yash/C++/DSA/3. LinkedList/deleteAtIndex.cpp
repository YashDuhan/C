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

Node *createLinkedList()
{
    Node *a1 = new Node(10);
    Node *a2 = new Node(20);
    Node *a3 = new Node(30);
    Node *a4 = new Node(40);
    Node *a5 = new Node(50);
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;

    return a1;    
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

Node *deleteAtIndex(Node*head, int pos)
{
    Node *temp = head;
    Node *previousNode = nullptr;
    Node *nextNode = nullptr;
    for(int i =0 ; i<(pos-1); i++)
    {
        previousNode = temp->next;
    }
    nextNode = previousNode->next->next;
    previousNode->next = nextNode;
    return head;
}

int main()
{
    int pos;
    Node *head = createLinkedList();
    cout<<"Enter the position : ";
    cin>>pos;
    cout<<"Before updating"<<endl;
    printLinkedList(head);
    cout<<"After Updating "<<endl;
    head = deleteAtIndex(head,pos);
    printLinkedList(head);
    return 0;
}
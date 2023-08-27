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

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;

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

Node *insertAtFirst(Node *head, int data)
{
    Node *firstElement = new Node(data);
    firstElement->next = head;
    return firstElement;
}

int main()
{
    int data;
    Node *head = createLinkedList();
    cout<<"Enter the data  : ";
    cin>>data;
    cout<<"Before updating "<<endl;
    printLinkedList(head);
    cout<<"After updating "<<endl;
    Node *finalLL = insertAtFirst(head, data);
    printLinkedList(finalLL);
}
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
    }
};

Node *createLinkedList()
{
    Node *a1 = new Node(10);
    Node *a2 = new Node(20);
    Node *a3 = new Node(30);
    Node *a4 = new Node(40);
    Node *a5 = new Node(50);
    Node *a6 = new Node(60);
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = a6;
    a6->next = nullptr;
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

int main()
{
    Node *head = createLinkedList();
    printLinkedList(head);
}
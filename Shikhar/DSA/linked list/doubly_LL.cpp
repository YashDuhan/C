#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
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

    a6->prev = a5;
    a5->prev = a4;
    a4->prev = a3;
    a3->prev = a2;
    a2->prev = a1;
    a1->prev = nullptr;

    return a1;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while(temp!= nullptr)
    {
        cout<<temp->data<<"   ";
        temp = temp->next;
    }
}


int main()
{
    Node *head = createLinkedList();
    printLinkedList(head);

    return 0;
}
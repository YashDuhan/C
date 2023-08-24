#include <iostream>
using namespace std;

//node-class
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

//create-linkedlist
Node *createLinkedList()
{
    Node *l1 = new Node(10);
    Node *l2 = new Node(20);
    Node *l3 = new Node(30);
    Node *l4 = new Node(40);

    //linking-nodes
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;

    //returning head
    return l1;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
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


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
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    
    return n1;
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

Node *appendAtIndex(Node *head, int data, int pos)
{
    Node *previousNode = nullptr;
    Node *currentNode = new Node(data);
    Node *nextNode = nullptr;
    Node *temp = head;
    for(int i = 0; i<(pos-1); i++)
    {
        previousNode = temp;
        temp = temp->next;
    }
    nextNode = previousNode->next;
    previousNode->next = currentNode;
    currentNode->next = nextNode;

    return head;
}

int main()
{
    Node *head = createLinkedList();
    head = appendAtIndex(head, 40 ,4);
    printLinkedList(head);
}
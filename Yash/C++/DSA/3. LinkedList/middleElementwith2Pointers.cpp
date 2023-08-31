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
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    return n1;
} 

Node* middleElement(Node *head)
{
    Node *slowptr = head;
    Node *fastpointer = head;
    while(fastpointer!= nullptr && fastpointer->next != nullptr)
    {
        fastpointer = fastpointer->next->next;
        slowptr = slowptr->next;
    }
    return slowptr;
}

void printLinkedList(Node *head)
{
    Node*temp = head;
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
    cout<<"The middle element is :  "<<middleElement(head)->data<<endl;
    return 0;
}
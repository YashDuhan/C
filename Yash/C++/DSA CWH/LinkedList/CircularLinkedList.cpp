#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
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
    a6->next = a1; //last node isn't null

    return a1;
}

void printLinkedList(Node *head)
{
    //Normal Loop wouldn't be able to print the last element so we have used to do while loop to print that one last node
    Node *temp = head;
    do
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    } while (temp != head);
    
}

Node* insertAtFirst(Node *head, int data)
{
    Node *lastNode = head;

    while(lastNode->next != head)
    {
        lastNode = lastNode->next;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    lastNode->next = newNode;
    return newNode;
}

void insertAtPos(Node *head, int data, int pos)
{
    Node *newNode = new Node(data);
    Node *previousNode = head;

    for(int i = 0; i<(pos-1); i++)
    {
        previousNode = previousNode->next;
    }
    Node *nextNode = nullptr;
    nextNode = previousNode->next;

    //linking step
    previousNode->next = newNode;
    newNode->next = nextNode;
}

int main()
{
    Node *head = createLinkedList();
    printLinkedList(head);
    head = insertAtFirst(head, 90);
    cout<<"After updating"<<endl;
    printLinkedList(head);
    insertAtPos(head,110,2);
    cout<<"After updating"<<endl;
    printLinkedList(head);
}